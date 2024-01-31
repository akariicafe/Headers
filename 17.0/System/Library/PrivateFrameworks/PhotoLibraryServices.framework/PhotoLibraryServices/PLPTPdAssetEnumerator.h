@class NSArray, PLPTPdAssetManager, PLManagedObjectContext;
@protocol PLPTPConversionSupport;

@interface PLPTPdAssetEnumerator : NSObject {
    PLManagedObjectContext *_managedObjectContext;
    NSArray *_assetObjectIDs;
    id<PLPTPConversionSupport> _conversionSupport;
    PLPTPdAssetManager *_assetManager;
}

+ (id)enumeratorForAssetManager:(id)a0 assetObjectIDs:(id)a1 managedObjectContext:(id)a2 conversionSupport:(id)a3;

- (void).cxx_destruct;
- (id)_enumerateAssetsWithCount:(unsigned long long)a0 fetchOffset:(unsigned long long)a1;
- (id)assetsFromOffset:(unsigned long long)a0 count:(unsigned long long)a1;
- (void)enumerateAssetsUsingBlock:(id /* block */)a0;
- (BOOL)enumerateAssetsWithCount:(unsigned long long)a0 fetchOffset:(unsigned long long)a1 usingBlock:(id /* block */)a2;
- (id)initWithAssetManager:(id)a0 assetObjectIDs:(id)a1 managedObjectContext:(id)a2 conversionSupport:(id)a3;

@end
