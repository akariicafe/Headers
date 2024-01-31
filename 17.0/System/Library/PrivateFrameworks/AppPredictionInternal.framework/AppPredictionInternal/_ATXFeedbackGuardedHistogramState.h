@class _ATXAppLaunchCategoricalHistogram;

@interface _ATXFeedbackGuardedHistogramState : NSObject {
    _ATXAppLaunchCategoricalHistogram *appCoarseTimePOWLocationConfirmsHistogram;
    _ATXAppLaunchCategoricalHistogram *appSpecificTimeDOWLocationConfirmsHistogram;
    _ATXAppLaunchCategoricalHistogram *appCoarseTimePOWLocationRejectsHistogram;
    _ATXAppLaunchCategoricalHistogram *appSpecificTimeDOWLocationRejectsHistogram;
    _ATXAppLaunchCategoricalHistogram *appConfirmsTwoHourTimeInterval;
    _ATXAppLaunchCategoricalHistogram *appRejectsTwoHourTimeInterval;
    _ATXAppLaunchCategoricalHistogram *appConfirmsDayOfWeek;
    _ATXAppLaunchCategoricalHistogram *appRejectsDayOfWeek;
    _ATXAppLaunchCategoricalHistogram *appConfirmsCoarseGeoHash;
    _ATXAppLaunchCategoricalHistogram *appRejectsCoarseGeoHash;
    _ATXAppLaunchCategoricalHistogram *appConfirmsSpecificGeoHash;
    _ATXAppLaunchCategoricalHistogram *appRejectsSpecificGeoHash;
    _ATXAppLaunchCategoricalHistogram *appExplicitRejectsCoarseTimePOWLocation;
    _ATXAppLaunchCategoricalHistogram *homeScreenAppConfirmsCoarseTimePOWLocation;
    _ATXAppLaunchCategoricalHistogram *homeScreenAppConfirmsSpecificTimeDOWLocation;
    _ATXAppLaunchCategoricalHistogram *homeScreenAppConfirmsTwoHourTimeInterval;
    _ATXAppLaunchCategoricalHistogram *homeScreenAppConfirmsDayOfWeek;
    _ATXAppLaunchCategoricalHistogram *homeScreenAppConfirmsCoarseGeohash;
    _ATXAppLaunchCategoricalHistogram *homeScreenAppConfirmsSpecificGeohash;
    _ATXAppLaunchCategoricalHistogram *homeScreenAppRejectsCoarseTimePOWLocation;
    _ATXAppLaunchCategoricalHistogram *homeScreenAppRejectsSpecificTimeDOWLocation;
    _ATXAppLaunchCategoricalHistogram *homeScreenAppRejectsTwoHourTimeInterval;
    _ATXAppLaunchCategoricalHistogram *homeScreenAppRejectsDayOfWeek;
    _ATXAppLaunchCategoricalHistogram *homeScreenAppRejectsCoarseGeohash;
    _ATXAppLaunchCategoricalHistogram *homeScreenAppRejectsSpecificGeohash;
    _ATXAppLaunchCategoricalHistogram *homeScreenAppExplicitRejectsCoarseTimePOWLocation;
    _ATXAppLaunchCategoricalHistogram *appDirectoryConfirmsCoarseTimePOWLocation;
    _ATXAppLaunchCategoricalHistogram *appDirectoryConfirmsSpecificTimeDOWLocation;
    _ATXAppLaunchCategoricalHistogram *appDirectoryConfirmsTwoHourTimeInterval;
    _ATXAppLaunchCategoricalHistogram *appDirectoryConfirmsDayOfWeek;
    _ATXAppLaunchCategoricalHistogram *appDirectoryConfirmsCoarseGeohash;
    _ATXAppLaunchCategoricalHistogram *appDirectoryConfirmsSpecificGeohash;
    _ATXAppLaunchCategoricalHistogram *appDirectoryRejectsCoarseTimePOWLocation;
    _ATXAppLaunchCategoricalHistogram *appDirectoryRejectsSpecificTimeDOWLocation;
    _ATXAppLaunchCategoricalHistogram *appDirectoryRejectsTwoHourTimeInterval;
    _ATXAppLaunchCategoricalHistogram *appDirectoryRejectsDayOfWeek;
    _ATXAppLaunchCategoricalHistogram *appDirectoryRejectsCoarseGeohash;
    _ATXAppLaunchCategoricalHistogram *appDirectoryRejectsSpecificGeohash;
    _ATXAppLaunchCategoricalHistogram *appDirectoryExplicitRejectsCoarseTimePOWLocation;
}

- (void).cxx_destruct;

@end
