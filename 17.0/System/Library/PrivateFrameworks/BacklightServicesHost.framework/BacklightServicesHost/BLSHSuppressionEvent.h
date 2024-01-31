@interface BLSHSuppressionEvent : NSObject

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) unsigned long long reason;
@property (readonly, nonatomic) unsigned long long machContinuousTimestamp;
@property (readonly, nonatomic, getter=wantsSuppression) BOOL suppression;

- (id)description;
- (id)initWithCoreMotionEvent:(id)a0 timestamp:(unsigned long long)a1;
- (id)initWithType:(unsigned long long)a0 reason:(unsigned long long)a1 timestamp:(unsigned long long)a2;

@end
