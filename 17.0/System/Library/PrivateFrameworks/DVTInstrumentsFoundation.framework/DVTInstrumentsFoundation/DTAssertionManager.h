@class NSArray, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface DTAssertionManager : NSObject {
    NSArray *_assertionFactories;
    NSArray *_disableKeys;
    NSObject<OS_dispatch_queue> *_guard;
    NSMutableDictionary *_pidInfosByPid;
}

+ (id)sharedInstance;
+ (void)defaultAssertionFactories:(id *)a0 andDisableKeys:(id *)a1;

- (id)init;
- (void).cxx_destruct;
- (id)initWithAssertionFactories:(id)a0 andDisableKeys:(id)a1;
- (void)removeAssertionsForPid:(int)a0 onBehalfOfClient:(id)a1;
- (void)removeClaimsHeldByClient:(id)a0;
- (void)takeAssertionsForPid:(int)a0 onBehalfOfClient:(id)a1 withOptions:(id)a2;

@end
