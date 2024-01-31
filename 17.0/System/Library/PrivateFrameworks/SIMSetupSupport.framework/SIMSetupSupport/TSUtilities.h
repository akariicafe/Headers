@interface TSUtilities : NSObject

+ (BOOL)isPad;
+ (BOOL)isDeviceLocked;
+ (id)productClass;
+ (void)launchURL:(id)a0;
+ (BOOL)inBuddy;
+ (BOOL)isOnBootstrap;
+ (BOOL)isWifiAvailable;
+ (BOOL)transferOptions;
+ (id)getErrorTitleDetail:(id)a0 forCarrier:(id)a1;
+ (id)_findPPRItem:(id)a0;
+ (id)backgroundColorForRemotePlan:(BOOL)a0;
+ (id)formattedPhoneNumber:(id)a0 withCountryCode:(id)a1;
+ (id)getByteRepresentationOf:(id)a0;
+ (BOOL)isBackAllowed:(id)a0;
+ (BOOL)isGreenTeaCapable;
+ (BOOL)isRegRestActiveLocationAuthorizedOff:(id)a0;
+ (BOOL)isRegRestActiveLocationServiceOff:(id)a0;
+ (BOOL)isRegulatoryRestrictionActive:(id)a0;
+ (BOOL)isSecureIntentUIRequired:(id)a0;
+ (unsigned long long)odaPlans:(id)a0;
+ (id)preinstallPPRAlertControllerWithItems:(id)a0 completion:(id /* block */)a1;
+ (id)secureIntentAccessControlItem;
+ (id)textColorForRemotePlan:(BOOL)a0;
+ (unsigned long long)transferablePlans:(id)a0;

@end
