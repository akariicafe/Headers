@class IDSService, NSString;

@interface CKSettingSMSRelayController : PSListController <IDSServiceDelegate>

@property (retain, nonatomic) IDSService *relayService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isDeviceUsingMiCWithIdentifier:(id)a0;
+ (id)authorizedSMSRelayDevices;
+ (BOOL)deviceIsAuthorized:(id)a0;
+ (id)micSMSRelayDevices;
+ (unsigned long long)numberOfActiveDevices;
+ (BOOL)shouldShowSMSRelaySettings;

- (void)service:(id)a0 devicesChanged:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (id)specifiers;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (void)systemApplicationWillEnterForeground;
- (BOOL)isDeviceUsingMiCWithIdentifier:(id)a0;
- (id)_footerSpecifierForSMSRelayGroup;
- (id)_headerSpecifierForMicGroup;
- (id)_headerSpecifierForNonMicGroupDisplayingHeader:(BOOL)a0;
- (id)_specifiersForDevices:(id)a0 cellType:(long long)a1 get:(SEL)a2;
- (id)getDeviceActive:(id)a0;
- (id)getDeviceOn:(id)a0;
- (BOOL)isMiCEnabled;
- (void)setDeviceActive:(id)a0 specifier:(id)a1;

@end
