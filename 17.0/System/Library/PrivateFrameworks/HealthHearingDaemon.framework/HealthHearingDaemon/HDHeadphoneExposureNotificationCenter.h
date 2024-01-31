@class HAENotificationCenter, HDHeadphoneExposureNotificationSyncManager, HDProfile, HDCloudSyncManager;

@interface HDHeadphoneExposureNotificationCenter : NSObject {
    HDProfile *_profile;
    HAENotificationCenter *_notificationCenter;
    HDHeadphoneExposureNotificationSyncManager *_notificationSyncManager;
    HDCloudSyncManager *_cloudSyncManager;
}

- (id)postSevenDayDoseNotification:(id)a0 nowDate:(id)a1 analyticsInfo:(id)a2 error:(id *)a3;
- (void)_reportHeadphoneNotificationWithNowDate:(id)a0 eventDuration:(double)a1 exposureLevel:(double)a2 exposureDuration:(double)a3 hasPrunableData:(BOOL)a4 isDeviceLocked:(BOOL)a5 analyticsInfo:(id)a6;
- (void).cxx_destruct;
- (id)initWithProfile:(id)a0 syncManager:(id)a1;

@end
