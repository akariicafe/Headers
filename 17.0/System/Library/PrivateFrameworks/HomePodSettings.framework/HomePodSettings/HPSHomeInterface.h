@class NSXPCConnection;
@protocol HPSettingsConnectionInterfaceDelegate;

@interface HPSHomeInterface : NSObject

@property (weak, nonatomic) id<HPSettingsConnectionInterfaceDelegate> delegate;
@property (retain, nonatomic) NSXPCConnection *hpsConnection;
@property (nonatomic) BOOL connectionValid;

+ (id)connectionError;

- (void)startConnection;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)handleConnectionInvalidated;
- (void)handleConnectionInterrupted;
- (void)_accessoryDidUpdateAttribute:(id)a0 withContext:(id)a1;
- (void)getAirPlaySettings:(id /* block */)a0;
- (void)getCurrentHomeAttribute:(id)a0 completion:(id /* block */)a1;
- (void)getHomeAccessoryAttribute:(id)a0 completion:(id /* block */)a1;
- (void)getHomeKitCachedSettings:(id /* block */)a0;
- (void)isAutomaticSoftwareUpdateEnabled:(id /* block */)a0;
- (void)isHomeKitSyncComplete:(id /* block */)a0;

@end
