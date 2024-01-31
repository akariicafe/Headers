@class CATOperationQueue, NSString, CATOperation, CRKClassroomInstallation, CATTaskClient, NSObject;
@protocol CRKToolCommandDelegate, OS_dispatch_source;

@interface CRKToolCommand : NSObject <CATTaskClientDelegate> {
    NSObject<OS_dispatch_source> *mSIGINTSource;
    CATTaskClient *mTaskClient;
    CATOperationQueue *mOperationQueue;
    CATOperation *mOperation;
}

@property (class, readonly, nonatomic) BOOL supportsJSON;
@property (class, readonly, nonatomic) BOOL supportsVerboseOutput;
@property (class, readonly, nonatomic) BOOL supportsDMFRequest;

@property (nonatomic, getter=shouldPrintJSON) BOOL printJSON;
@property (nonatomic, getter=shouldPrintVerbose) BOOL printVerbose;
@property (nonatomic, getter=shouldUseDMFRequest) BOOL useDMFRequest;
@property (weak, nonatomic) id<CRKToolCommandDelegate> delegate;
@property (copy, nonatomic) NSString *sessionIdentifier;
@property (retain, nonatomic) CRKClassroomInstallation *targetClassroomInstallation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)aliases;
+ (id)description;
+ (id)help;
+ (BOOL)handlesProgress;
+ (BOOL)instructorCommand;
+ (void)printHelp;
+ (id)subcommandPath;

- (id)init;
- (void)clientDidDisconnect:(id)a0;
- (void)clientDidConnect:(id)a0;
- (id)transportProvider;
- (void).cxx_destruct;
- (void)client:(id)a0 didInterruptWithError:(id)a1;
- (void)client:(id)a0 didReceiveNotificationWithName:(id)a1 userInfo:(id)a2;
- (void)remoteTaskDidFinish:(id)a0;
- (id)DMFRequestWithArguments:(id)a0;
- (void)_remoteTaskDidFinish:(id)a0;
- (void)_remoteTaskDidProgress:(id)a0;
- (id)arrayByParsingAndRemovingArgumentFlags:(id)a0;
- (void)cleanupAndExitIfNeeded;
- (void)connectToTaskClientWithCompletionBlock:(id /* block */)a0;
- (BOOL)didCommandSucceed;
- (BOOL)didOperationSucceed:(id)a0;
- (void)executeOperation:(id)a0;
- (BOOL)isCommandFinished;
- (id)operationWithClient:(id)a0 arguments:(id)a1;
- (void)remoteTaskDidProgress:(id)a0;
- (id)requestWithArguments:(id)a0;
- (void)runWithArguments:(id)a0;
- (void)runWithClient:(id)a0 arguments:(id)a1;

@end
