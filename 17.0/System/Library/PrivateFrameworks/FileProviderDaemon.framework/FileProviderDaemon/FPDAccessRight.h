@class FPDExtension;

@interface FPDAccessRight : NSObject {
    unsigned long long _accessLevel;
}

@property (readonly, nonatomic) unsigned long long level;
@property (readonly, weak, nonatomic) FPDExtension *provider;

- (id)init;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0 connection:(id)a1 manager:(id)a2;
- (void)_computeAccessForURL:(id)a0 entitlements:(id)a1 connection:(id)a2;
- (id)initWithURL:(id)a0 entitlements:(id)a1 connection:(id)a2 manager:(id)a3;

@end
