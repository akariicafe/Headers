@class HFStaticItemProvider, HFItem, HMAccessory, HMSymptomsHandler;
@protocol HFHomeKitObject;

@interface HUAccessoryDebugModule : HFItemModule

@property (readonly, nonatomic) HMAccessory *accessory;
@property (readonly, nonatomic) HMSymptomsHandler *symptomsHandler;
@property (readonly, nonatomic) HFStaticItemProvider *debugItemProvider;
@property (readonly, nonatomic) id<HFHomeKitObject> homeKitObject;
@property (readonly, nonatomic) HFItem *fakeUnreachableItem;
@property (readonly, nonatomic) HFItem *fakeWiFiSymptomItem;
@property (readonly, nonatomic) HFItem *fakeWiFiPerformanceSymptomItem;
@property (readonly, nonatomic) HFItem *fakeInternetFixSymptomItem;
@property (readonly, nonatomic) HFItem *fakeHardwareFixSymptomItem;
@property (readonly, nonatomic) HFItem *fakeGeneralFixSymptomItem;
@property (readonly, nonatomic) HFItem *fakeHomeKitSymptomItem;
@property (readonly, nonatomic) HFItem *fakeICloudSymptomItem;
@property (readonly, nonatomic) HFItem *fakeITunesSymptomItem;
@property (readonly, nonatomic) HFItem *fakeWifiNetworkMismatchSymptomItem;
@property (readonly, nonatomic) HFItem *fakeVPNProfileExpiredSymptomItem;
@property (readonly, nonatomic) HFItem *fake8021xNetworkSymptomItem;
@property (readonly, nonatomic) HFItem *fakeNetworkProfileFixSymptomItem;
@property (readonly, nonatomic) HFItem *fakeNetworkProfileInstallSymptomItem;
@property (readonly, nonatomic) HFItem *fakeNetworkNotShareableSymptomItem;
@property (readonly, nonatomic) HFItem *fakeCaptiveLeaseRenewalSymptomItem;
@property (readonly, nonatomic) HFItem *fakeNetworkStrengthErrorItem;
@property (readonly, nonatomic) HFItem *fakeStereoPairGeneralSymptomItem;
@property (readonly, nonatomic) HFItem *fakeStereoPairNotFoundSymptomItem;
@property (readonly, nonatomic) HFItem *fakeStereoPairVersionMismatchSymptomItem;
@property (nonatomic) BOOL fakeUnreachableError;
@property (nonatomic) BOOL fakeWiFiSymptom;
@property (nonatomic) BOOL fakeWiFiPerformanceSymptom;
@property (nonatomic) BOOL fakeInternetFixSymptom;
@property (nonatomic) BOOL fakeHardwareFixSymptom;
@property (nonatomic) BOOL fakeGeneralFixSymptom;
@property (nonatomic) BOOL fakeHomeKitSymptom;
@property (nonatomic) BOOL fakeICloudSymptom;
@property (nonatomic) BOOL fakeITunesSymptom;
@property (nonatomic) BOOL fakeWiFiNetworkMismatchSymptom;
@property (nonatomic) BOOL fakeVPNProfileExpiredSymptom;
@property (nonatomic) BOOL fake8021xNetworkSymptom;
@property (nonatomic) BOOL fakeNetworkProfileFixSymptom;
@property (nonatomic) BOOL fakeNetworkProfileInstallSymptom;
@property (nonatomic) BOOL fakeNetworkNotShareableSymptom;
@property (nonatomic) BOOL fakeCaptiveLeaseRenewalSymptom;
@property (nonatomic) BOOL fakeNetworkStrengthError;
@property (nonatomic) BOOL fakeStereoPairGeneralSymptom;
@property (nonatomic) BOOL fakeStereoPairNotFoundSymptom;
@property (nonatomic) BOOL fakeStereoPairVersionMismatchSymptom;

- (void).cxx_destruct;
- (id)itemProviders;
- (void)_pushSymptomUpdate;
- (void)_reloadItemProviders;
- (id)buildSectionsWithDisplayedItems:(id)a0;
- (id)initWithItemUpdater:(id)a0 homeKitObject:(id)a1;

@end
