@interface WLWiFiManager : NSObject

@property (nonatomic) struct __WiFiManagerClient { } *ref;
@property (readonly, nonatomic) BOOL isTetheringSupported;

- (void)enable;
- (id)init;
- (void)dealloc;
- (void)disable;
- (id)createDeviceClient;

@end
