@class NSString, HIDPreferencesHelperListener, NSObject;
@protocol OS_xpc_object;

@interface HIDPreferencesHelperClient : NSObject <HIDPreferencesProtocol> {
    NSObject<OS_xpc_object> *_connection;
    HIDPreferencesHelperListener *_listener;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)setupConnection;
- (id)handleMessage:(id)a0;
- (void).cxx_destruct;
- (void)invalidateConnection;
- (void)copy:(id)a0 user:(id)a1 host:(id)a2 domain:(id)a3 reply:(id /* block */)a4;
- (void)copyDomain:(id)a0 domain:(id)a1 reply:(id /* block */)a2;
- (void)copyMultiple:(id)a0 user:(id)a1 host:(id)a2 domain:(id)a3 reply:(id /* block */)a4;
- (id)initWithConnection:(id)a0 listener:(id)a1;
- (void)set:(id)a0 value:(id)a1 user:(id)a2 host:(id)a3 domain:(id)a4;
- (void)setDomain:(id)a0 value:(id)a1 domain:(id)a2;
- (void)setMultiple:(id)a0 keysToRemove:(id)a1 user:(id)a2 host:(id)a3 domain:(id)a4;
- (void)synchronize:(id)a0 host:(id)a1 domain:(id)a2;

@end
