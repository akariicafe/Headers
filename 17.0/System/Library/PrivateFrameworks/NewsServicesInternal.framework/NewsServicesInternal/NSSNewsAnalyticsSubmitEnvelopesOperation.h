@class NSArray;
@protocol FCNewsAppConfigurationManager, FCCoreConfigurationManager;

@interface NSSNewsAnalyticsSubmitEnvelopesOperation : FCOperation

@property (copy, nonatomic) NSArray *envelopes;
@property (copy, nonatomic) id /* block */ handoffCompletion;
@property (copy, nonatomic) id /* block */ submissionCompletion;
@property (retain, nonatomic) id<FCNewsAppConfigurationManager, FCCoreConfigurationManager> appConfigurationManager;

- (void)operationDidFinishWithError:(id)a0;
- (id)init;
- (void)performOperation;
- (BOOL)validateOperation;
- (void).cxx_destruct;

@end
