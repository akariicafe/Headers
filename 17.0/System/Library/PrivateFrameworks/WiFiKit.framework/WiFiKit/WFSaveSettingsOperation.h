@class NSString, NSArray, NSOperationQueue;

@interface WFSaveSettingsOperation : WFOperation {
    NSString *_name;
}

@property (copy, nonatomic) NSString *interfaceName;
@property (copy, nonatomic) NSString *ssid;
@property (nonatomic) struct __SCPreferences { } *prefs;
@property (retain, nonatomic) NSArray *settings;
@property (retain, nonatomic) NSOperationQueue *keychainQueue;
@property (nonatomic, getter=isCurrentNetwork) BOOL currentNetwork;

- (void)dealloc;
- (void)start;
- (void)setName:(id)a0;
- (void).cxx_destruct;
- (id)name;
- (void)_applyProxySettings:(id)a0 service:(struct __SCNetworkProtocol { } *)a1;
- (struct __SCNetworkSet { } *)_createNewSetForNetworkNamed:(id)a0 interfaceName:(id)a1;
- (struct __SCNetworkSet { } *)_defaultSetRetained;
- (id)initWithSSID:(id)a0 interfaceName:(id)a1 settings:(id)a2;

@end
