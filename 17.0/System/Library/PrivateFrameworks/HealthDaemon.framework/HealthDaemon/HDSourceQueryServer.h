@class NSString, NSMutableSet;

@interface HDSourceQueryServer : HDQueryServer <HDDataObserver> {
    BOOL _deliversUpdates;
    NSMutableSet *_sources;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)requiredEntitlements;
+ (Class)queryClass;

- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;
- (void)samplesAdded:(id)a0 anchor:(id)a1;
- (void)_queue_start;
- (void).cxx_destruct;
- (BOOL)_shouldListenForUpdates;

@end
