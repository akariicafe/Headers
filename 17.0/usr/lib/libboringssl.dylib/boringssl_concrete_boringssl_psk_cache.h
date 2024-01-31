@class NSString, boringssl_concrete_boringssl_ctx, NSObject;
@protocol OS_dispatch_queue, OS_sec_array;

@interface boringssl_concrete_boringssl_psk_cache : NSObject <OS_boringssl_psk_cache> {
    NSObject<OS_sec_array> *list;
    boringssl_concrete_boringssl_ctx *context;
    id /* block */ psk_selection_block;
    NSObject<OS_dispatch_queue> *psk_selection_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
