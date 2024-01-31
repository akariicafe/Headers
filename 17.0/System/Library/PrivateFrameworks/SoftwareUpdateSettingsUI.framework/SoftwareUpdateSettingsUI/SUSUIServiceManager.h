@class NSMutableDictionary;

@interface SUSUIServiceManager : NSObject {
    NSMutableDictionary *_registeredServices;
}

@property BOOL initialized;

+ (id)sharedInstance;

- (id)init;
- (void)reset;
- (void)initialize;
- (void).cxx_destruct;
- (Class)classForService:(Class)a0;
- (Class)classForServiceName:(id)a0;
- (BOOL)isServiceRegistered:(id)a0;
- (id)mockedServicesMap;
- (void)registerMockClasses;
- (void)registerServiceWithName:(id)a0 forServiceClass:(Class)a1;

@end
