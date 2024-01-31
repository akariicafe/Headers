@interface GEOPrivacyManager : NSObject {
    BOOL _lastKnownLocationServicesEnabled;
    BOOL _hasLastKnownLocationServicesEnabled;
}

@property (readonly, nonatomic) BOOL hasFiredCallHistoryRecentsClearedNotification;
@property (readonly, nonatomic) BOOL hasFiredResetPrivacyWarningsNotification;
@property (readonly, nonatomic) BOOL hasFiredLocationServicesDisabledNotification;

+ (id)sharedManager;

- (id)init;
- (void)dealloc;
- (void)_locationServicesStateChanged;
- (void)_fireResetLocationAndPrivacyNotification;
- (void)_fireRecentsClearedNotification;

@end
