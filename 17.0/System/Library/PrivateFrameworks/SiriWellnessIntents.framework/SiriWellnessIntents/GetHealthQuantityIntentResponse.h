@class NSString, NSDate;

@interface GetHealthQuantityIntentResponse : INIntentResponse

@property (nonatomic, copy) NSDate *sampleStartDate;
@property (nonatomic, copy) NSDate *sampleEndDate;
@property (nonatomic, copy) NSString *unit;
@property (nonatomic) double average;
@property (nonatomic) double total;
@property (nonatomic) double minimum;
@property (nonatomic) double maximum;
@property (nonatomic) double mostRecent;
@property (nonatomic) void /* unknown type, empty encoding */ code;

- (id)init;
- (id)initWithBackingStore:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithCode:(long long)a0 userActivity:(id)a1;
- (id)initWithPropertiesByName:(id)a0;

@end
