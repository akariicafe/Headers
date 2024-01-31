@class HDFeatureAvailabilityManager, NSString, HDMHNotificationManager, HDPrimaryProfile, HDBackgroundFeatureDeliveryManager, HKMHSettingsManager, HDAnalyticsDailyEventManager;

@interface HDMHProfileExtension : NSObject <HDProfileExtension, HDFeatureAvailabilityExtensionProvider> {
    HDFeatureAvailabilityManager *_stateOfMindLoggingFeatureAvailabilityManager;
    HDFeatureAvailabilityManager *_depressionAndAnxietyAssessmentsFeatureAvailabilityManager;
    HDBackgroundFeatureDeliveryManager *_depressionAndAnxietyAssessmentsBackgroundFeatureDeliveryManager;
    HDFeatureAvailabilityManager *_periodicDepressionAndAnxietyAssessmentPromptsFeatureAvailabilityManager;
    HDBackgroundFeatureDeliveryManager *_periodicDepressionAndAnxietyAssessmentPromptsBackgroundFeatureDeliveryManager;
    HDFeatureAvailabilityManager *_stateOfMindLoggingPatternEscalationsFeatureAvailabilityManager;
    HDBackgroundFeatureDeliveryManager *_stateOfMindLoggingPatternEscalationsBackgroundFeatureDeliveryManager;
    HDAnalyticsDailyEventManager *_mentalHealthDailyEventManager;
}

@property (readonly, nonatomic) HKMHSettingsManager *settingsManager;
@property (readonly, nonatomic) HDMHNotificationManager *notificationManager;
@property (readonly, weak, nonatomic) HDPrimaryProfile *profile;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
