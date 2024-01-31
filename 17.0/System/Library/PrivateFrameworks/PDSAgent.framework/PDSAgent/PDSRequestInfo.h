@class NSDate;

@interface PDSRequestInfo : NSObject

@property (nonatomic) unsigned long long regReason;
@property (retain, nonatomic) NSDate *heartbeatDate;

- (id)init;
- (void).cxx_destruct;
- (id)initWithRegistrationReason:(unsigned long long)a0 nextHeartbeatDate:(id)a1;

@end
