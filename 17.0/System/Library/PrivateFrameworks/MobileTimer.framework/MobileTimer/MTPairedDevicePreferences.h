@class NPSManager;

@interface MTPairedDevicePreferences : NSObject

@property (retain, nonatomic) NPSManager *npsManager;
@property (readonly, nonatomic) BOOL pushAlertsEnabled;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)_notifyClientsOfChange;
- (void).cxx_destruct;
- (void)_handlePrefsChanged;
- (BOOL)_isPushAlertsEnabledInPreferences;
- (BOOL)isPushAlertsEnabled;

@end
