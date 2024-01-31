@interface LKNotificationListenerOperation : NSOperation

@property (nonatomic) unsigned long long notificationType;
@property (nonatomic) double timeOutPeriod;
@property (copy, nonatomic) id /* block */ notificationListenerCompletionBlock;
@property (nonatomic) BOOL operationExecuting;
@property (nonatomic) BOOL operationFinished;
@property (nonatomic) BOOL operationCancelled;
@property (nonatomic) BOOL operationReady;
@property (nonatomic) int notifyToken;
@property (copy, nonatomic) id /* block */ listenerStartedBlock;

- (BOOL)isExecuting;
- (BOOL)isCancelled;
- (void)start;
- (BOOL)isFinished;
- (void).cxx_destruct;
- (void)cancel;
- (void)_endOperation;
- (id)_errorForNotificationType:(unsigned long long)a0;
- (id)_notificationForNotificationType:(unsigned long long)a0;
- (id)initWithNotificationType:(unsigned long long)a0 timeOutPeriod:(double)a1 completionBlock:(id /* block */)a2;

@end
