@class BLSHBacklightIdleProvider;

@interface BLSHPreventBacklightIdleAttributeHandler : BLSHLocalCountingAssertionAttributeHandler {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _active[3];
}

@property (readonly, weak, nonatomic) BLSHBacklightIdleProvider *provider;

+ (id)registerHandlerForService:(id)a0 provider:(id)a1;
+ (id)attributeClasses;
+ (Class)attributeBaseClass;

- (void)activateWithFirstEntry:(id)a0;
- (id)initForService:(id)a0 provider:(id)a1;
- (void)deactivateWithFinalEntry:(id)a0;
- (void).cxx_destruct;
- (void)activate:(BOOL)a0 withEntry:(id)a1;
- (id)countingTargetForEntry:(id)a0;
- (long long)typeForEntry:(id)a0;

@end
