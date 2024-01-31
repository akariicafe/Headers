@class SBAppSwitcherServiceSet;

@interface SBAppSwitcherServiceManager : NSObject {
    SBAppSwitcherServiceSet *_services;
}

+ (id)sharedInstance;

- (id)registeredServicesSnapshot;
- (void)registerService:(id)a0;
- (void)unregisterService:(id)a0;
- (void).cxx_destruct;

@end
