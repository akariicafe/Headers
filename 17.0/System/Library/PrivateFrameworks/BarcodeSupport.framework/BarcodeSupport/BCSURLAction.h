@class LSApplicationRecord, NSArray, NSURL, CTCellularPlanManagerCameraScanAction, CoreTelephonyClient;

@interface BCSURLAction : BCSAction {
    NSArray *_appLinks;
    LSApplicationRecord *_userVisibleAppRecord;
    NSArray *_upiApplicationRecords;
    BOOL _deviceDataIsUnavailable;
    NSURL *_appStoreSearchURLForUnsupportedScheme;
    CoreTelephonyClient *_coreTelephonyClient;
    CTCellularPlanManagerCameraScanAction *_cellularPlanAction;
}

@property (readonly, nonatomic) LSApplicationRecord *targetApplication;
@property (readonly, nonatomic) BOOL mustOpenAppLinkInApp;
@property (readonly, nonatomic) unsigned long long appLinkCount;
@property (readonly, nonatomic) BOOL hasPreferredAppLink;

- (id)shortDescription;
- (void)performAction;
- (void).cxx_destruct;
- (id)url;
- (void)performDefaultAction;
- (id)appLinks;
- (id)actionPickerItems;
- (id)defaultActionTargetApplicationBundleIdentifier;
- (id)localizedDefaultActionDescription;
- (id)urlThatCanBeOpened;
- (id)actionIcon;
- (id)contentPreviewString;
- (id)menuElements;
- (unsigned long long)menuElementsCount;
- (BOOL)hasSensitiveURL;
- (BOOL)isPasskeyAction;
- (id)_actionDescriptionForAppClip;
- (id)_actionDescriptionForURL:(id)a0 application:(id)a1 shouldShowHostNameForSafariURL:(BOOL)a2;
- (id)_actionDescriptionWithoutTargetApplicationForURL:(id)a0;
- (id)_actionPickerItemsForAppClip;
- (id)_actionPickerItemsForLockScreenVisibleApps;
- (id)_actionPickerItemsForUnlockedAppLinks;
- (id)_additionalActionPickerItems;
- (id)_appclipLaunchReason;
- (id)_commonActionPickerItemsForURL;
- (BOOL)_hasCellularPlanAction;
- (BOOL)_isCodeFromQRScanner;
- (BOOL)_isVisualCode;
- (id)_menuElementForActionPicker:(id)a0;
- (id)_passkeyAssertionActionDescription;
- (id)_passkeyRegistrationActionDescription;
- (void)_queryApplicationRecordForURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)_resolveAppClipForURL:(id)a0 completion:(id /* block */)a1;
- (void)_resolveTargetApplicationForURL:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)_shouldBlockHandlingURL:(id)a0;
- (BOOL)_shouldOpenInAppForAppLink:(id)a0;
- (BOOL)_tryDetermineActionabilityForSpecialCodesFromQRScannerWithCompletionHandler:(id /* block */)a0;
- (BOOL)_willOpenInSafari;
- (id)debugDescriptionExtraInfoDictionary;
- (void)determineActionabilityWithCompletionHandler:(id /* block */)a0;
- (id)initWithData:(id)a0 codePayload:(id)a1;
- (BOOL)isAMSAction;
- (BOOL)isAirplayPairingAction;
- (BOOL)isPasskeyAssertionAction;
- (BOOL)isPasskeyRegistrationAction;
- (id)localizedDefaultActionTitle;
- (void)performActionWithOptions:(id)a0 completion:(id /* block */)a1;
- (void)performDefaultActionWithFBOptions:(id)a0;
- (id)preferredBundleID;
- (BOOL)shouldRequireUserToPickTargetApp;

@end
