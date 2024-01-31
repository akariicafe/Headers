@class NSString, NSDictionary, NSDate, NSNumber;

@interface PDSRegistrationAbandonedMetric : NSObject <CUTCoreAnalyticsMetric>

@property (readonly, nonatomic) NSString *failureReason;
@property (readonly, nonatomic) NSNumber *registrationReason;
@property (readonly, nonatomic) NSDate *heartbeatDate;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithFailureReason:(id)a0 registrationReason:(id)a1 heartbeatDate:(id)a2;

@end
