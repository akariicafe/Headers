@class NSString, NSDictionary, NSNumber;

@interface IDSMissingMessageMetric : NSObject

@property (readonly, nonatomic) long long reason;
@property (readonly, nonatomic) NSString *guid;
@property (readonly, nonatomic) NSString *service;
@property (readonly, nonatomic) NSDictionary *additionalInfo;
@property (readonly, nonatomic) NSDictionary *payload;
@property (readonly, nonatomic) NSNumber *command;

- (void).cxx_destruct;
- (BOOL)_isInternal;
- (id)initWithReason:(long long)a0 guid:(id)a1 service:(id)a2 additionalInformation:(id)a3;
- (BOOL)shouldReportMetric;
- (BOOL)_shouldReportMetricForExternal;
- (BOOL)_shouldReportReason;
- (BOOL)_shouldReportReasonForExternal;

@end
