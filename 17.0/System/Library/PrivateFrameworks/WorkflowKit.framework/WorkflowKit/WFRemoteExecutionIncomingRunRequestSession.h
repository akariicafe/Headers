@class NSSet, NSDictionary, WFOutOfProcessWorkflowController, NSString;

@interface WFRemoteExecutionIncomingRunRequestSession : WFRemoteExecutionSession <WFOutOfProcessWorkflowControllerDelegate>

@property (retain, nonatomic) NSSet *lastKnownDestinations;
@property (retain, nonatomic) NSDictionary *lastKnownOptions;
@property (retain, nonatomic) WFOutOfProcessWorkflowController *controller;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)finish;
- (void).cxx_destruct;
- (void)finishWithError:(id)a0;
- (void)outOfProcessWorkflowController:(id)a0 didFinishWithResult:(id)a1 dialogAttribution:(id)a2;
- (void)handleIncomingFileForRemoteExecutionWithURL:(id)a0 withIdentifier:(id)a1 metadata:(id)a2 destinations:(id)a3 options:(id)a4;
- (void)handleIncomingProtobuf:(id)a0 destinations:(id)a1 options:(id)a2;
- (void)handleTimeout;
- (void)handleUnsupportedVersionForRequestData:(id)a0 error:(id)a1 destinations:(id)a2 options:(id)a3;
- (void)sendResponse:(id)a0 toDestinations:(id)a1 options:(id)a2;
- (double)timeoutLimitInSeconds;

@end
