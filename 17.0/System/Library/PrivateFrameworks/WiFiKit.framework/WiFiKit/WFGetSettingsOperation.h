@class NSString, NSArray, NSOperationQueue;

@interface WFGetSettingsOperation : WFOperation {
    NSString *_name;
}

@property (copy, nonatomic) NSString *ssid;
@property (copy, nonatomic) NSString *interfaceName;
@property (nonatomic) struct __SCPreferences { } *prefs;
@property (retain, nonatomic) NSArray *settings;
@property (retain, nonatomic) NSOperationQueue *keychainQueue;

- (void)dealloc;
- (void)start;
- (void)setName:(id)a0;
- (void).cxx_destruct;
- (id)name;
- (id)initWithSSID:(id)a0 interfaceName:(id)a1;

@end
