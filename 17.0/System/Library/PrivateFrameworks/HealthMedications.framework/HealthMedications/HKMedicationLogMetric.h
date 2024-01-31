@class NSString, NSDictionary, HKMedicationAnalyticsGenericFieldsProvider, NSNumber;

@interface HKMedicationLogMetric : NSObject {
    HKMedicationAnalyticsGenericFieldsProvider *_genericDataProvider;
    long long _actions;
    long long _provenance;
    long long _context;
    BOOL _isLoggingMultipleMeds;
    NSNumber *_hoursAgoLoggedForMax;
    NSNumber *_hoursAgoLoggedForMin;
    NSNumber *_hoursFromScheduledTimeLoggedMax;
    NSNumber *_hoursFromScheduledTimeLoggedMin;
    NSNumber *_hoursFromScheduledToTakenOrSkippedMax;
    NSNumber *_hoursFromScheduledToTakenOrSkippedMin;
    NSNumber *_isPartiallyLoggingScheduledMeds;
}

@property (class, readonly, nonatomic) NSString *eventName;

@property (copy, nonatomic) NSDictionary *eventPayload;

- (id)description;
- (void).cxx_destruct;
- (id)provenanceValue;
- (id)actionsPayload;
- (id)contextValue;
- (id)initWithActions:(long long)a0 provenance:(long long)a1 context:(long long)a2 loggingMultipleMeds:(BOOL)a3 hoursAgoLoggedForMax:(id)a4 hoursAgoLoggedForMin:(id)a5 hoursFromScheduledTimeLoggedMax:(id)a6 hoursFromScheduledTimeLoggedMin:(id)a7 hoursFromScheduledToTakenOrSkippedMax:(id)a8 hoursFromScheduledToTakenOrSkippedMin:(id)a9 isPartiallyLoggingScheduledMeds:(id)a10 dataSource:(id)a11;

@end
