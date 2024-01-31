@class NSUUID, _TtC8MapsSync13MapsSyncStore, NSDate, NSManagedObjectID;

@interface MapsSync.MapsSyncObject : NSObject {
    void /* unknown type, empty encoding */ _store;
    void /* unknown type, empty encoding */ _managedObjectId;
    void /* unknown type, empty encoding */ _propertyLock;
    void /* unknown type, empty encoding */ _editBlocks;
    void /* unknown type, empty encoding */ _identifier;
    void /* unknown type, empty encoding */ _createTime;
    void /* unknown type, empty encoding */ _modificationTime;
}

@property (class, nonatomic, readonly) Class managedClass;

@property (nonatomic, retain) NSManagedObjectID *managedId;
@property (nonatomic, readonly) BOOL isStored;
@property (nonatomic, readonly) _TtC8MapsSync13MapsSyncStore *store;
@property (nonatomic, readonly) BOOL hasChanges;
@property (nonatomic, copy) NSUUID *identifier;
@property (nonatomic, copy) NSDate *createTime;
@property (nonatomic, copy) NSDate *modificationTime;
@property (nonatomic, readonly) long long hash;

+ (id)findDuplicatesWithContext:(id)a0;
+ (id)mergeWithDuplicates:(id)a0;
+ (id)strippedMapItemWith:(id)a0;

- (id)init;
- (id)initWithStore:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)flushChanges;
- (void)addEdit:(id)a0 :(id /* block */)a1;
- (id)getManagedObjectOnContextWithLock:(id)a0 context:(id)a1;
- (id)initWithObject:(id)a0 store:(id)a1;
- (id)onDeleteWithManagedObject:(id)a0 context:(id)a1;
- (void)performEditsOnContextWithLock:(id)a0 managedObject:(id)a1;
- (void)setPropertiesUnsafeWithManagedObject:(id)a0;
- (void)withPropertyLock:(id /* block */)a0;

@end
