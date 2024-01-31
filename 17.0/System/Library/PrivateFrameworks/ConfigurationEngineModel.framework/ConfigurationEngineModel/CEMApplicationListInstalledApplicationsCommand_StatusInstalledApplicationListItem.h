@class NSSet, NSString, NSNumber;

@interface CEMApplicationListInstalledApplicationsCommand_StatusInstalledApplicationListItem : CEMPayloadBase

@property (class, readonly, copy) NSSet *allowedStatusKeys;

@property (copy, nonatomic) NSString *statusBundleIdentifier;
@property (copy, nonatomic) NSString *statusExternalVersionIdentifier;
@property (copy, nonatomic) NSString *statusVersion;
@property (copy, nonatomic) NSString *statusShortVersion;
@property (copy, nonatomic) NSString *statusName;
@property (copy, nonatomic) NSString *statusBundleSize;
@property (copy, nonatomic) NSString *statusDynamicSize;
@property (copy, nonatomic) NSNumber *statusIsValidated;
@property (copy, nonatomic) NSNumber *statusInstalling;
@property (copy, nonatomic) NSNumber *statusAppStoreVendable;
@property (copy, nonatomic) NSNumber *statusDeviceBasedVPP;
@property (copy, nonatomic) NSNumber *statusBetaApp;
@property (copy, nonatomic) NSNumber *statusAdHocCodeSigned;
@property (copy, nonatomic) NSNumber *statusHasUpdateAvailable;
@property (copy, nonatomic) NSNumber *statusDownloadFailed;
@property (copy, nonatomic) NSNumber *statusDownloadWaiting;
@property (copy, nonatomic) NSNumber *statusDownloadPaused;
@property (copy, nonatomic) NSNumber *statusDownloadCancelled;

+ (id)buildRequiredOnlyWithBundleIdentifier:(id)a0 withExternalVersionIdentifier:(id)a1 withVersion:(id)a2 withShortVersion:(id)a3 withName:(id)a4 withAppStoreVendable:(id)a5 withDeviceBasedVPP:(id)a6 withBetaApp:(id)a7 withAdHocCodeSigned:(id)a8 withHasUpdateAvailable:(id)a9;
+ (id)buildWithBundleIdentifier:(id)a0 withExternalVersionIdentifier:(id)a1 withVersion:(id)a2 withShortVersion:(id)a3 withName:(id)a4 withBundleSize:(id)a5 withDynamicSize:(id)a6 withIsValidated:(id)a7 withInstalling:(id)a8 withAppStoreVendable:(id)a9 withDeviceBasedVPP:(id)a10 withBetaApp:(id)a11 withAdHocCodeSigned:(id)a12 withHasUpdateAvailable:(id)a13 withDownloadFailed:(id)a14 withDownloadWaiting:(id)a15 withDownloadPaused:(id)a16 withDownloadCancelled:(id)a17;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)loadPayload:(id)a0 error:(id *)a1;
- (id)serializePayload;

@end
