@class NSString, NSMapTable, NSObject;
@protocol OS_dispatch_queue;

@interface CPLPlatform : NSObject {
    NSMapTable *_abstractClassToImplementation;
    NSObject<OS_dispatch_queue> *_lock;
}

@property (copy, nonatomic) NSString *suffix;

+ (id)defaultPlatform;
+ (id)currentPlatform;
+ (void)setDefaultPlatform:(id)a0;
+ (void)setProxyImplementationForPlatform:(id)a0;

- (id)init;
- (id)newPlatformImplementationForObject:(id)a0;
- (id)description;
- (Class)implementationClassForAbstractClass:(Class)a0;
- (void).cxx_destruct;
- (void)setPlatformImplementation:(Class)a0 forClass:(Class)a1;

@end
