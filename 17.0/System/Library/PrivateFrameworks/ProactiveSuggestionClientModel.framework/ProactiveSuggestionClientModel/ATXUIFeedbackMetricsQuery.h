@class NSDate;

@interface ATXUIFeedbackMetricsQuery : NSObject

@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (nonatomic) long long clientModelType;
@property (nonatomic) unsigned char consumerSubType;

- (id)init;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToATXUIFeedbackMetricsQuery:(id)a0;

@end
