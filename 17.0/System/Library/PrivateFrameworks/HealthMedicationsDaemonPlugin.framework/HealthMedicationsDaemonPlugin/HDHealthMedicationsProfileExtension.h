@class HDAnalyticsDailyEventManager, HDMedicationScheduleManager, NSString, HDMedicationsWidgetSchedulingManager, HDMedicationDataDonator, HDMedicationNotificationSyncManager, HDPrimaryProfile, HDMedicationDoseEventObserver, HDMedicationSyncRequester;

@interface HDHealthMedicationsProfileExtension : NSObject <HDProfileExtension> {
    HDAnalyticsDailyEventManager *_medicationDailyAnalyticsManager;
}

@property (readonly, nonatomic) HDMedicationDataDonator *medicationsDataDonator;
@property (readonly, weak, nonatomic) HDPrimaryProfile *profile;
@property (readonly, nonatomic) HDMedicationNotificationSyncManager *medicationNotificationSyncManager;
@property (readonly, nonatomic) HDMedicationScheduleManager *medicationScheduleManager;
@property (readonly, nonatomic) HDMedicationDoseEventObserver *medicationDoseEventObserver;
@property (readonly, nonatomic) HDMedicationSyncRequester *medicationSyncRequester;
@property (readonly, nonatomic) HDMedicationsWidgetSchedulingManager *widgetSchedulingManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)createMedicationsDonatorWithError:(id *)a0;
- (id)initWithProfile:(id)a0;
- (void)start;
- (id)createMedicationNotificationSyncManager;
- (id)createMedicationsWidgetTimelineController;
- (void).cxx_destruct;

@end
