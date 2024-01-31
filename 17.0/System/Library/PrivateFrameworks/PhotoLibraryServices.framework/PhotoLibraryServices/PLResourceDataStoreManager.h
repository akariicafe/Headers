@interface PLResourceDataStoreManager : NSObject

+ (id)updateDerivativeResourcesForAsset:(id)a0 forLifecycleEvent:(unsigned int)a1;
+ (id)storesForLibraryID:(id)a0;
+ (id)storeForExternalResource:(id)a0 inLibraryWithID:(id)a1;
+ (id)storeExternalResources:(id)a0 forAsset:(id)a1 forLifecycleEvent:(unsigned int)a2 error:(id *)a3;

@end
