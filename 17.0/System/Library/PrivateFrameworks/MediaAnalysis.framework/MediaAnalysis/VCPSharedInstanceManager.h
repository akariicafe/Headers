@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface VCPSharedInstanceManager : NSObject {
    NSObject<OS_dispatch_queue> *serialQueue_;
    NSMutableDictionary *sharedInstances_;
}

+ (id)sharedManager;

- (id)init;
- (void)reset;
- (void)resetSharedInstanceWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)sharedInstanceWithIdentifier:(id)a0 andCreationBlock:(id /* block */)a1;

@end
