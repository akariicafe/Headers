@class NSDictionary, ATXLocationToLaunchCorrelation, NSDate;

@interface ATXAppLaunchMicroLocationGuardedData : NSObject {
    id _waitForUnlockNotificationToken;
    NSDictionary *_currentMicroLocation;
    NSDate *_currentMicroLocationDate;
    ATXLocationToLaunchCorrelation *_locationToAppLaunchCorrelation;
    ATXLocationToLaunchCorrelation *_locationToActionKeyCorrelation;
}

- (id)getCurrentMicroLocation;
- (id)initWithCurrentMicroLocation:(id)a0;
- (void)setCurrentMicroLocation:(id)a0;
- (void).cxx_destruct;
- (BOOL)microLocationExpired:(id)a0;

@end
