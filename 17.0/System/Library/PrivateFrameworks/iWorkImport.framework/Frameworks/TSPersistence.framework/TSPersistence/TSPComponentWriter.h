@class TSPReferenceOrderedSet, TSPArchiverManager, NSMapTable, NSObject, TSPComponent, TSPMutableComponentObjectUUIDMap, NSMutableIndexSet, TSPMutableComponentDataReferenceMap, NSString, NSHashTable, NSIndexSet, NSMutableSet, TSPObject, TSPObjectReferenceMap;
@protocol OS_dispatch_group, TSPComponentWriterDelegate, OS_dispatch_semaphore, OS_dispatch_queue, TSPComponentWriteChannel;

@interface TSPComponentWriter : NSObject {
    NSString *_locator;
    id<TSPComponentWriterDelegate> _delegate;
    long long _mode;
    unsigned char _packageIdentifier;
    TSPObjectReferenceMap *_objectReferenceMap;
    id<TSPComponentWriteChannel> _writeChannel;
    TSPArchiverManager *_archiverManager;
    NSObject<OS_dispatch_semaphore> *_delegateSemaphore;
    unsigned long long _componentReadVersion;
    TSPReferenceOrderedSet *_archivedObjects;
    NSMapTable *_archivedObjectsDictionary;
    TSPMutableComponentObjectUUIDMap *_componentObjectUUIDMap;
    TSPMutableComponentDataReferenceMap *_componentDataReferenceMap;
    struct vector<TSP::ObjectStackEntry, std::allocator<TSP::ObjectStackEntry>> { struct ObjectStackEntry *__begin_; struct ObjectStackEntry *__end_; struct __compressed_pair<TSP::ObjectStackEntry *, std::allocator<TSP::ObjectStackEntry>> { struct ObjectStackEntry *__value_; } __end_cap_; } _objectStack;
    NSObject<OS_dispatch_group> *_writeGroup;
    NSObject<OS_dispatch_queue> *_writeQueue;
    TSPReferenceOrderedSet *_weakReferences;
    NSHashTable *_lazyReferences;
    NSHashTable *_dataReferences;
    TSPReferenceOrderedSet *_externalReferences;
    NSIndexSet *_componentAmbiguousReferences;
    NSMutableIndexSet *_ambiguousReferences;
    unsigned long long _objectTargetType;
    struct { unsigned char success : 1; unsigned char isErrorRecoverable : 1; unsigned char calculatedObjectTargetType : 1; unsigned char delegateRespondsToNeedsDocumentRecovery : 1; unsigned char delegateRespondsToLocatorForClaimingComponent : 1; unsigned char delegateRespondsToObjectBelongsToCopiedComponent : 1; unsigned char delegateRespondsToExternalPackageDidWriteObject : 1; unsigned char delegateRespondsToShouldDelayWritingObject : 1; } _flags;
}

@property (readonly, nonatomic) TSPComponent *component;
@property (readonly, nonatomic) TSPObject *rootObject;
@property (readonly, nonatomic) NSMutableSet *featureInfos;

- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)validateObjectContextForObject:(id)a0;
- (void)acquireArchiverAccessLockAndWriteObjects:(id)a0 parentObject:(id)a1 completion:(id /* block */)a2;
- (BOOL)canSkipArchivingStronglyReferencedObject:(id)a0 fromComponentRootObject:(id)a1;
- (id)initWithComponent:(id)a0 locator:(id)a1 rootObject:(id)a2 delegate:(id)a3 mode:(long long)a4 packageIdentifier:(unsigned char)a5 objectReferenceMapOrNil:(id)a6 writeChannel:(id)a7 archiverManager:(id)a8;
- (BOOL)isObjectExternal:(id)a0 archiverOrNil:(id)a1 parentObject:(id)a2 hasArchiverAccessLock:(BOOL)a3 claimingComponent:(id *)a4 isOwnedByDifferentPackage:(BOOL *)a5 isAmbiguousOwnership:(BOOL *)a6;
- (BOOL)isObjectExternalBecauseItAlreadyBelongsToAnotherComponent:(id)a0 parentObject:(id)a1 claimingComponent:(id *)a2 claimingPackageIdentifier:(unsigned char *)a3 claimingComponentWillBeCopied:(BOOL *)a4 claimingComponentReadVersion:(unsigned long long *)a5;
- (BOOL)isObjectExternalBecauseOfExplicitComponentOwnership:(id)a0 archiverOrNil:(id)a1 claimingComponentOrNil:(id)a2 hasArchiverAccessLock:(BOOL)a3 explicitComponentRootObject:(id *)a4 claimingComponent:(id *)a5 isOwnedByDifferentPackage:(BOOL *)a6;
- (BOOL)shouldDelayWritingObject:(id)a0;
- (BOOL)shouldWriteObject:(id)a0;
- (BOOL)supportsAutomaticAmbiguousOwnershipResolutionWithComponentReadVersion:(unsigned long long)a0;
- (void)validateAmbiguousObjectOwnershipForObject:(id)a0 explicitComponentRootObject:(id)a1 parentObject:(id)a2 claimingComponent:(id)a3 claimingPackageIdentifier:(unsigned char)a4 claimingComponentWillBeCopied:(BOOL)a5 claimingComponentReadVersion:(unsigned long long)a6 isAmbiguousOwnership:(BOOL *)a7;
- (void)validateExplicitComponentOwnershipForObject:(id)a0 archiverOrNil:(id)a1 parentObject:(id)a2 hasArchiverAccessLock:(BOOL)a3;
- (void)writeArchiver:(id)a0 forObjectIdentifier:(long long)a1;
- (void)writeObject:(id)a0 archiver:(id)a1 parentObject:(id)a2 completion:(id /* block */)a3;
- (void)writeWithArchiverAccessLockForObjects:(id)a0 parentObject:(id)a1 completion:(id /* block */)a2;
- (void)writeWithCompletionQueue:(id)a0 completion:(id /* block */)a1;

@end
