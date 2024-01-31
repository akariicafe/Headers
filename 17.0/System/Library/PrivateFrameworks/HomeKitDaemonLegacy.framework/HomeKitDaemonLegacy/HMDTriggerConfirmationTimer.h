@class NSUUID;

@interface HMDTriggerConfirmationTimer : HMFTimer

@property (readonly, nonatomic) NSUUID *executionSessionID;

- (id)description;
- (void).cxx_destruct;
- (id)initWithExecutionSessionID:(id)a0 timeoutInterval:(double)a1;

@end
