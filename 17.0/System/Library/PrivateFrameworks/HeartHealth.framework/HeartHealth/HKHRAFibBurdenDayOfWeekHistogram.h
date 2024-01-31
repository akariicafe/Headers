@class HKHRAFibBurdenAnalysisResult;

@interface HKHRAFibBurdenDayOfWeekHistogram : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) HKHRAFibBurdenAnalysisResult *sundayBurden;
@property (readonly, nonatomic) HKHRAFibBurdenAnalysisResult *mondayBurden;
@property (readonly, nonatomic) HKHRAFibBurdenAnalysisResult *tuesdayBurden;
@property (readonly, nonatomic) HKHRAFibBurdenAnalysisResult *wednesdayBurden;
@property (readonly, nonatomic) HKHRAFibBurdenAnalysisResult *thursdayBurden;
@property (readonly, nonatomic) HKHRAFibBurdenAnalysisResult *fridayBurden;
@property (readonly, nonatomic) HKHRAFibBurdenAnalysisResult *saturdayBurden;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSundayBurden:(id)a0 mondayBurden:(id)a1 tuesdayBurden:(id)a2 wednesdayBurden:(id)a3 thursdayBurden:(id)a4 fridayBurden:(id)a5 saturdayBurden:(id)a6;

@end
