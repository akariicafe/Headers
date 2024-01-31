@class NSString, NSSet, NSCondition, NSObject;
@protocol OS_dispatch_queue, DKExtensionRegistry;

@interface DKExtensionDiscovery : NSObject

@property (retain, nonatomic) id<DKExtensionRegistry> registry;
@property (retain, nonatomic) NSString *bundleIdentifier;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *discoveryQueue;
@property (retain, nonatomic) NSCondition *discoveryLock;
@property (nonatomic) BOOL discoveryComplete;
@property (retain, nonatomic) NSSet *services;

+ (id)discoveryUsingExtensionRegistry:(id)a0 services:(id)a1 bundleIdentifier:(id)a2;

- (void)waitUntilComplete;
- (void)_beginExtensionDiscovery;
- (void).cxx_destruct;
- (void)_registerExtensions:(id)a0 error:(id)a1;
- (id)initWithExtensionRegistry:(id)a0 services:(id)a1 bundleIdentifier:(id)a2;

@end
