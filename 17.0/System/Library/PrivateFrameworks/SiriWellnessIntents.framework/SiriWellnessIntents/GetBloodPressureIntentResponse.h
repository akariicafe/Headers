@class NSString, NSDate;

@interface GetBloodPressureIntentResponse : INIntentResponse

@property (nonatomic) double systolic;
@property (nonatomic) double systolicMaximum;
@property (nonatomic) double systolicMinimum;
@property (nonatomic) double diastolic;
@property (nonatomic) double diastolicMaximum;
@property (nonatomic) double diastolicMinimum;
@property (nonatomic, copy) NSString *unit;
@property (nonatomic, copy) NSDate *sampleStartDate;
@property (nonatomic, copy) NSDate *sampleEndDate;
@property (nonatomic) void /* unknown type, empty encoding */ code;

- (id)init;
- (id)initWithBackingStore:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithCode:(long long)a0 userActivity:(id)a1;
- (id)initWithPropertiesByName:(id)a0;

@end
