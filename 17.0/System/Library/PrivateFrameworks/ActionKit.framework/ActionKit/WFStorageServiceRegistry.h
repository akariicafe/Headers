@class NSArray, NSSet;

@interface WFStorageServiceRegistry : NSObject

@property (readonly, nonatomic) NSArray *registeredServices;
@property (readonly, nonatomic) NSArray *storageServices;
@property (readonly, nonatomic) NSSet *objectRepresentationClasses;

+ (id)sharedRegistry;
+ (void)registerAllActionKitStorageServiceClasses;
+ (void)registerStorageServiceClass:(Class)a0;

- (id)init;
- (void).cxx_destruct;
- (id)storageServiceWithName:(id)a0;

@end
