@class NSError;

@interface IMDaemonCore.IMDPreReqsChecker : NSObject <IMDaemonCore.SyncPreReqsVerifying> {
    void /* unknown type, empty encoding */ logger;
}

- (id)init;
- (void).cxx_destruct;
- (void)verifyAllPreReqsWithCompletionHandler:(void (^)(NSError *))a0;

@end
