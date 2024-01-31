@interface HPSSpatialProfileManager : NSObject

+ (id)profileEnrollmentViewController;
+ (BOOL)isProfileExisting;
+ (BOOL)isProxCardEnrollmentSupportedForDevice:(id)a0;
+ (BOOL)isProxCardShowed;
+ (BOOL)isSettingsEnrollmentSupported;
+ (id)profileManagementSpecifier;
+ (void)setProxCardShowed:(BOOL)a0;
+ (void)setProxCardShowed:(BOOL)a0 forDevice:(id)a1;
+ (id)spatialProfileStatus;

@end
