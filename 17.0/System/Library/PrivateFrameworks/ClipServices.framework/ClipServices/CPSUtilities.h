@interface CPSUtilities : NSObject

+ (id)osVersion;
+ (int)_deviceClass;
+ (BOOL)deviceHasHomeButton;
+ (BOOL)isNetworkConstrained;
+ (BOOL)deviceIsPad;
+ (BOOL)deviceHasCapabilities:(id)a0;
+ (id)openURL:(id)a0;
+ (BOOL)deviceIsLocked;
+ (id)openURL:(id)a0 withOptions:(id)a1;
+ (id)localizedDeviceName;
+ (id)oppositeDeviceFamilyName;
+ (id)poweredByCaptionForAppName:(id)a0;
+ (BOOL)shouldPlayHaptics;
+ (id)productVariants;
+ (BOOL)_associatedDomainIsApprovedForURL:(id)a0 applicationIdentifier:(id)a1 serviceType:(id)a2;
+ (BOOL)appClipAssociatedDomainIsApprovedForURL:(id)a0 applicationIdentifier:(id)a1;
+ (BOOL)isBundleIdentifierBeingInstalled:(id)a0;
+ (id)lowercasedDeviceFamilyName;
+ (void)openAppWithBundleIdentifier:(id)a0;
+ (void)openURL:(id)a0 inAppWithBundleIdentifier:(id)a1 completionHandler:(id /* block */)a2;
+ (void)openURL:(id)a0 inAppWithBundleIdentifier:(id)a1 promptForUnlock:(BOOL)a2 originIsControlCenter:(BOOL)a3 completionHandler:(id /* block */)a4;
+ (void)uninstallAppWithBundleIdentifier:(id)a0 completion:(id /* block */)a1;
+ (BOOL)validDomainAssociationWithAnyServiceTypeForURL:(id)a0 applicationIdentifier:(id)a1;
+ (id)versionIdentifierForAppWithBundleIdentifier:(id)a0 isPlaceholder:(BOOL *)a1;

@end
