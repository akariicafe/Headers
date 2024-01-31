@class NSString, NSUUID, NSSet, BSAtomicFlag, NSHashTable;

@interface PBFApplicationStateNode : NSObject <PBFStateComponentDelegate, BSCancellable> {
    BSAtomicFlag *_observerNotificationScheduled;
    NSHashTable *_observers;
}

@property (readonly, nonatomic) NSString *stateDescription;
@property (readonly, nonatomic) NSUUID *uniqueIdentifier;
@property (copy) NSSet *components;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithDescription:(id)a0;
- (void).cxx_destruct;
- (void)cancel;
- (void)addStateObserver:(id)a0;
- (void)removeStateObserver:(id)a0;
- (void)_componentsDidUpdate;
- (void)componentWasUpdated:(id)a0;
- (void)updateByAddingComponent:(id)a0;
- (void)updateByRemovingComponent:(id)a0;

@end
