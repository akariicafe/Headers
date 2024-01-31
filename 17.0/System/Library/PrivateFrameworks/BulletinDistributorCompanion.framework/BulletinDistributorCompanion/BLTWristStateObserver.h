@class NSString;

@interface BLTWristStateObserver : NSObject <MCProfileConnectionObserver>

@property (readonly, nonatomic) BOOL isWristDetectDisabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)profileConnectionDidReceiveRestrictionChangedNotification:(id)a0 userInfo:(id)a1;
- (id)init;
- (void)dealloc;
- (BOOL)_isWristDetectionDisabled;
- (void)_updateWristDetectSetting;
- (BOOL)_wristDetectionDisabledPreference;
- (BOOL)_wristDetectionEnabledRestriction;

@end
