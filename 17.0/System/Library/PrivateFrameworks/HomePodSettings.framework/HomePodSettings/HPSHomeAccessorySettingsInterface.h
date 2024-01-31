@class HPSHomeAccessoryInterfaceMediator, NSXPCConnection;
@protocol HPSHomeAccessorySettingsConnectionInterfaceDelegate;

@interface HPSHomeAccessorySettingsInterface : NSObject

@property (weak, nonatomic) id<HPSHomeAccessorySettingsConnectionInterfaceDelegate> delegate;
@property (retain, nonatomic) HPSHomeAccessoryInterfaceMediator *mediator;
@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (nonatomic) BOOL isValidConnection;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)handleConnectionInvalidated;
- (void)handleConnectionInterrupted;
- (void)accessoryDidUpdateValueForEndpointIdentifier:(id)a0 keyPath:(id)a1 value:(id)a2;
- (void)fetchSettingForEndpointIdentifier:(id)a0 keyPath:(id)a1 completionHandler:(id /* block */)a2;
- (void)subscribeToSettingForEndpointIdentifier:(id)a0 keyPath:(id)a1 completionHandler:(id /* block */)a2;
- (void)unsubscribeToSettingForEndpointIdentifier:(id)a0 keyPath:(id)a1 completionHandler:(id /* block */)a2;

@end
