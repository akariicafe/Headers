@class NSDate;

@interface GetSleepAnalysisIntentResponse : INIntentResponse

@property (nonatomic) long long daysSummarized;
@property (nonatomic) long long daysWithAsleepData;
@property (nonatomic) double totalInBedDuration;
@property (nonatomic) double totalAsleepDuration;
@property (nonatomic) double averageInBedDuration;
@property (nonatomic) double averageAsleepDuration;
@property (nonatomic, copy) NSDate *summaryStartDate;
@property (nonatomic, copy) NSDate *summaryEndDate;
@property (nonatomic) void /* unknown type, empty encoding */ code;

- (id)init;
- (id)initWithBackingStore:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithCode:(long long)a0 userActivity:(id)a1;
- (id)initWithPropertiesByName:(id)a0;

@end
