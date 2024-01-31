@class PXSectionedSelectionManager, NSArray, NSString, PXMediaProvider, PXBoopableItemsProvider_Swift;

@interface PXBoopableItemsProvider : NSObject <UIActivityItemsConfigurationReading>

@property (retain, nonatomic) PXBoopableItemsProvider_Swift *boopableItemsProvider;
@property (retain, nonatomic) PXSectionedSelectionManager *selectionManager;
@property (copy, nonatomic) NSArray *assets;
@property (retain, nonatomic) PXMediaProvider *imagePreviewMediaProvider;
@property (readonly, copy, nonatomic) NSArray *itemProvidersForActivityItemsConfiguration;
@property (readonly, copy, nonatomic) NSArray *applicationActivitiesForActivityItemsConfiguration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)activityItemsConfigurationMetadataForKey:(id)a0;
- (id)activityItemsConfigurationPreviewForItemAtIndex:(long long)a0 intent:(id)a1 suggestedSize:(struct CGSize { double x0; double x1; })a2;

@end
