@class NSNumber, CATTaskClient, NSError;

@interface CATRemoteTaskOperation : CATTaskOperation {
    NSError *mClientError;
}

@property (copy, nonatomic) NSNumber *remotePhase;
@property (readonly, nonatomic) CATTaskClient *client;

+ (BOOL)isCancelable;
+ (id)invalidRemoteTaskWithRequest:(id)a0 error:(id)a1;

- (void)main;
- (BOOL)isAsynchronous;
- (void)clientFailedWithError:(id)a0;
- (void)processNotificationWithName:(id)a0 userInfo:(id)a1;
- (void)cancelOperationIfNeeded;
- (void)postNotificationWithName:(id)a0 userInfo:(id)a1;
- (id)initWithRequest:(id)a0 clientError:(id)a1;
- (void)processMessage:(id)a0;
- (void)updateCompletedUnitCount:(long long)a0 andTotalUnitCount:(long long)a1;
- (id)initWithRequest:(id)a0 client:(id)a1;
- (void).cxx_destruct;
- (void)fetchProgress;
- (void)cancel;
- (void)operationWillFinish;
- (void)updateProgressWithRemoteProgress:(id)a0;

@end
