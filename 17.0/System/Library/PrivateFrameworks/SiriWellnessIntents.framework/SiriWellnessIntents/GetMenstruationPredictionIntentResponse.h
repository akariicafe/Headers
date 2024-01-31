@class NSString, NSDate;

@interface GetMenstruationPredictionIntentResponse : INIntentResponse

@property (nonatomic, copy) NSDate *nextPeriodStart;
@property (nonatomic, copy) NSDate *nextPeriodEnd;
@property (nonatomic, copy) NSDate *lastPeriodStart;
@property (nonatomic, copy) NSDate *lastPeriodEnd;
@property (nonatomic, copy) NSString *lastPeriodFlow;
@property (nonatomic) void /* unknown type, empty encoding */ code;

- (id)init;
- (id)initWithBackingStore:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithCode:(long long)a0 userActivity:(id)a1;
- (id)initWithPropertiesByName:(id)a0;

@end
