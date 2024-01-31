@class NSString, NSObject;
@protocol OS_nw_array;

@interface NWConcrete_nw_path_override_info : NSObject <OS_nw_path_override_info> {
    unsigned long long override_flags;
    NSObject<OS_nw_array> *resolver_configs;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;

@end
