@class NSString, NSObject;
@protocol OS_dispatch_data;

@interface NWConcrete_nw_h3_0rtt_storage_canvas : NSObject <OS_nw_h3_0rtt_storage_canvas> {
    NSObject<OS_dispatch_data> *settings_data;
    NSObject<OS_dispatch_data> *quic_state;
    NSObject<OS_dispatch_data> *tls_state;
    BOOL dirty;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;

@end
