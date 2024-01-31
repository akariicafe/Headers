@class NSSet;

@interface MapsSync.MapsSyncCollectionItem : MapsSync.MapsSyncBaseItem {
    void /* unknown type, empty encoding */ _collections;
}

@property (nonatomic, readonly) BOOL requiresCollection;
@property (nonatomic, readonly) NSSet *collections;

+ (id)fetchCollectionItemForIdentifier:(id)a0;

- (id)initWithObject:(id)a0;
- (id)initWithCollection:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(void *)a0;
- (void)addEditWithBlock:(id /* block */)a0;
- (void)executeOnFirstSave:(id)a0;
- (Class)managedObjectClass;
- (Class)mutableObjectClass;
- (void)setPropertiesWithObject:(id)a0;

@end
