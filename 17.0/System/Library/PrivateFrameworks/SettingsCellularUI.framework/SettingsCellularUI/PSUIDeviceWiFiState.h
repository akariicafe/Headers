@interface PSUIDeviceWiFiState : NSObject

+ (id)sharedInstance;

- (id)initPrivate;
- (id)init;
- (void)dealloc;
- (id)getLogger;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (BOOL)isConnectedOverWiFi;

@end
