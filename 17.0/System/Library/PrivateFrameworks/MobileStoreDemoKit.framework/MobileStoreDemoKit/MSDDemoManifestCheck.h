@class NSMutableDictionary, NSDictionary, NSSet, NSString, WhitelistChecker;

@interface MSDDemoManifestCheck : NSObject

@property unsigned int manifestVersion;
@property (retain) NSDictionary *segmentedManifestWithRigorousFlag;
@property (retain) NSMutableDictionary *allowedSymLinks;
@property (retain) NSSet *allowedISTSignedComponents;
@property (retain) WhitelistChecker *whitelistChecker;
@property (retain) NSDictionary *itemBeingInstalled;
@property (retain) NSString *checkType;
@property (retain) NSSet *settingsComponentNames;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)createPublicKeyAppleISTSigning:(id)a0;
- (BOOL)checkFileForEntitlements:(id)a0 forCorrespondingManifestEntry:(id)a1;
- (struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)createPublicKey:(id)a0 usingPolicy:(struct __SecPolicy { } *)a1 anchors:(id)a2;
- (struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)createPublicKeyForDevelopmentSigning:(id)a0;
- (struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)createPublicKeyForDevelopmentSigningStandard:(id)a0;
- (struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)createPublicKeyForStrongSigning:(id)a0;
- (id)getAllowedISTSignedComponents:(id)a0;
- (id)getAllowedISTSignedComponentsFromManifest:(id)a0;
- (id)getAllowedSymLinks;
- (id)getBackupItemName:(id)a0;
- (id)getBackupSectionName;
- (id)getComponentData:(id)a0;
- (id)getInstallationOrder;
- (id)getManifestData:(id)a0;
- (id)getSecurityCheckSectionNames;
- (id)getSettingsComponentNames;
- (id)getappIconLayoutBackupName;
- (id)initWithWhiteListChecker:(id)a0 andCheckType:(id)a1;
- (BOOL)isManualSigning:(id)a0;
- (BOOL)isValidDataContainerFile:(id)a0;
- (void)registerEntitlementNotificationHandler;
- (BOOL)runAppLayoutSecurityCheck:(id)a0;
- (BOOL)runFileSecurityChecksForSection:(id)a0 dataType:(id)a1;
- (BOOL)runSecurityCheck;
- (BOOL)runSecurityChecksForSection:(id)a0 dataType:(id)a1 componentName:(id)a2;
- (BOOL)runSettingsSecurityCheckForSection:(id)a0 component:(id)a1;
- (BOOL)secureManifestCheckForSegmentedManifest:(id)a0;
- (BOOL)validateISTSignedApp:(id)a0 manifest:(id)a1;
- (id)verifyManifestSignature:(id)a0 forDataSectionKeys:(id)a1 withRigorousTestingOverride:(id)a2;
- (BOOL)verifySignature:(id)a0 forData:(id)a1 withKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a2;

@end
