@class NSString, NSObject;
@protocol OS_dispatch_data;

@interface boringssl_concrete_boringssl_psk : NSObject <OS_boringssl_psk> {
    NSObject<OS_dispatch_data> *key;
    NSObject<OS_dispatch_data> *identity;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
