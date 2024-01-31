@class NSString, NSArray, NSMutableSet, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface PXImportAssetCollection : PXBaseDisplayCollection <NSCopying> {
    NSObject<OS_dispatch_queue> *_assetQueue;
    NSMutableArray *_assetList;
    NSArray *_arrangedAssetList;
    NSMutableSet *_assetUUIDs;
    BOOL _needsSorting;
}

@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) BOOL alreadyImportedGroup;

+ (id)dayFormatter;

- (id)localizedTitle;
- (id)itemAtIndex:(unsigned long long)a0;
- (id)init;
- (void)removeObjectsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)removeAllObjects;
- (void)addObjectsFromArray:(id)a0;
- (id)description;
- (long long)numberOfItems;
- (void).cxx_destruct;
- (void)removeObject:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)addObject:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)indexOfItem:(id)a0;
- (id)arrangedObjects;
- (id)unsortedObjects;
- (void)arrangedObjects:(id /* block */)a0;

@end
