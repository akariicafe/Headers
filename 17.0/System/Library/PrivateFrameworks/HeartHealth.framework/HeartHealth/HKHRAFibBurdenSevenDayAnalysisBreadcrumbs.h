@class NSString, NSDate;

@interface HKHRAFibBurdenSevenDayAnalysisBreadcrumbs : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDate *alarmFiredDate;
@property (retain, nonatomic) NSDate *xpcActivityFiredDate;
@property (retain, nonatomic) NSDate *maintenanceOperationRunDate;
@property (retain, nonatomic) NSDate *analysisStartedDate;
@property (retain, nonatomic) NSDate *tachogramsClassifiedDate;
@property (retain, nonatomic) NSDate *analysisEndedDate;
@property (retain, nonatomic) NSDate *analysisRetryLaterRequestedDate;
@property (retain, nonatomic) NSDate *lastAnalysisResultDate;
@property (retain, nonatomic) NSString *lastAnalysisResultContext;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAlarmFiredDate:(id)a0 xpcActivityFiredDate:(id)a1 maintenanceOperationRunDate:(id)a2 analysisStartedDate:(id)a3 tachogramsClassifiedDate:(id)a4 analysisEndedDate:(id)a5 analysisRetryLaterRequestedDate:(id)a6 lastAnalysisResultDate:(id)a7 lastAnalysisResultContext:(id)a8;

@end
