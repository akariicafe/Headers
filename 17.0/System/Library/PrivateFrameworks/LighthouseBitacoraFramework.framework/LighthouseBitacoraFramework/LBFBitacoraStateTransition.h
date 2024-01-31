@class NSDate;

@interface LBFBitacoraStateTransition : NSObject

@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) long long previousState;
@property (readonly, nonatomic) NSDate *timestamp;
@property (readonly, nonatomic) double timedelta;

- (void).cxx_destruct;
- (id)initWithBitcoraState:(long long)a0 previousState:(long long)a1 timestamp:(id)a2 timedelta:(double)a3;

@end
