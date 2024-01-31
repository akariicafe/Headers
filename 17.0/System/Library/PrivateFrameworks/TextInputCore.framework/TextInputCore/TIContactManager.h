@class NSUUID, NSString;

@interface TIContactManager : NSObject <TIContactManaging>

@property (readonly, copy, nonatomic) NSUUID *contactCollectionUUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)singletonInstance;
+ (void)setSharedTIContactManager:(id)a0;
+ (id)sharedTIContactManager;

- (void)unload;
- (void)removeContactObserver:(id /* block */)a0;
- (void)getOnce:(id /* block */)a0;
- (void)handleMemoryPressureLevel:(unsigned long long)a0 excessMemoryInBytes:(unsigned long long)a1;
- (void)keyboardActivityDidTransition:(id)a0;
- (void).cxx_destruct;
- (id /* block */)addContactObserver:(id /* block */)a0;

@end
