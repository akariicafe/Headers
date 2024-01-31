@class NSString, NSMapTable, NSMutableSet, BSServiceConnectionListener, NSObject;
@protocol OS_dispatch_queue;

@interface UIOServer : NSObject <BSServiceConnectionListenerDelegate> {
    BOOL _activated;
    NSObject<OS_dispatch_queue> *_serviceQueue;
    BSServiceConnectionListener *_connectionListener;
    NSMutableSet *_connections;
    NSMapTable *_displayDelegateTable;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)_identifierForSceneType:(long long)a0 displayHardwareIdentifier:(id)a1;
+ (id)displayDelegateIdentifierForScene:(id)a0;

- (id)init;
- (void)listener:(id)a0 didReceiveConnection:(id)a1 withContext:(id)a2;
- (void)invalidate;
- (void)activate;
- (void).cxx_destruct;
- (id)displayDelegateForAction:(id)a0;
- (id)displayDelegateForAction:(id)a0 sceneType:(long long)a1;
- (id)displayDelegateForIdentifier:(id)a0;
- (void)registerDisplayDelegate:(id)a0 forIdentifier:(id)a1;
- (void)unregisterDisplayDelegateForIdentifier:(id)a0;

@end
