@class NSString, NSMutableSet, NSSet;

@interface PUUUIDSelectionManager : PXObservable <_PUOneUpSelectionIndicatorCompatibleManager, PUMutableUUIDSelectionManager>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSMutableSet *_mutableSelectedUUIDs;
@property (readonly, copy, nonatomic) NSSet *selectedUUIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)performChanges:(id /* block */)a0;
- (id)init;
- (id)mutableChangeObject;
- (void).cxx_destruct;
- (BOOL)isSelectedUUID:(id)a0;
- (void)addSelectedUUID:(id)a0;
- (void)deselectAllUUIDs;
- (id)initWithSelectedUUIDs:(id)a0;
- (BOOL)pu_isAssetReferenceSelected:(id)a0;
- (void)pu_registerSelectionIndicatorObserver:(id)a0;
- (void)pu_unregisterSelectionIndicatorObserver:(id)a0;
- (void)removeSelectedUUID:(id)a0;
- (void)setSelectedUUIDs:(id)a0;

@end
