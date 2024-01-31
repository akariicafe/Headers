@class NSArray;

@interface PXBoopableItemsProvider_Swift : NSObject <UIActivityItemsConfigurationReading, PXChangeObserver> {
    void /* unknown type, empty encoding */ assets;
    void /* unknown type, empty encoding */ cachedItemProvidersByAsset;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ selectionManager;
@property (nonatomic, copy) NSArray *assets;
@property (nonatomic, retain) void /* unknown type, empty encoding */ imagePreviewMediaProvider;
@property (nonatomic, readonly) NSArray *itemProvidersForActivityItemsConfiguration;

- (id)init;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)dealloc;
- (void).cxx_destruct;
- (id)activityItemsConfigurationMetadataForItemAtIndex:(long long)a0 key:(id)a1;
- (id)activityItemsConfigurationMetadataForKey:(id)a0;
- (id)activityItemsConfigurationPreviewForItemAtIndex:(long long)a0 intent:(id)a1 suggestedSize:(struct CGSize { double x0; double x1; })a2;

@end
