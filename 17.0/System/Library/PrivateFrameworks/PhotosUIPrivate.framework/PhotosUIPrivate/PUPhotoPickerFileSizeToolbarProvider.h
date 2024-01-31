@class NSString, NSArray, PUPhotoPickerResizeTaskDescriptor, NSSet, UITableViewController, NSMutableDictionary, UILabel, UIBarButtonItem;
@protocol PUPhotoPickerFileSizeToolbarProviderDelegate, PUPhotosGridViewSupplementalToolbarDataSource;

@interface PUPhotoPickerFileSizeToolbarProvider : NSObject <UITableViewDataSource, UITableViewDelegate, PUPhotosGridViewSupplementalToolbarProvider> {
    id<PUPhotosGridViewSupplementalToolbarDataSource> _dataSource;
    UIBarButtonItem *_sizePickerItem;
    UILabel *_sizePickerDescriptionLabel;
    UITableViewController *_sizePickerViewController;
    BOOL _preparingToPresentSizePickerViewController;
    NSArray *_toolbarItems;
    NSArray *_resizeTaskDescriptors;
    NSSet *_cachedAssetSet;
    PUPhotoPickerResizeTaskDescriptor *_selectedTaskDescriptor;
    NSMutableDictionary *_taskDescriptorsToCachedLabels;
}

@property (weak, nonatomic) id<PUPhotoPickerFileSizeToolbarProviderDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL shouldShowToolbar;
@property (readonly, copy, nonatomic) NSArray *toolbarItems;

- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)initWithDataSource:(id)a0;
- (void).cxx_destruct;
- (id)_sizePickerItem;
- (id)_computeSelectedIndexPath;
- (id)_localizedLabelForResizeTaskDescriptor:(id)a0;
- (id)_orderedResizeTaskDescriptors;
- (id)_orderedResizeTaskDescriptorsForCurrentlySelectedAssets;
- (void)_presentSizePicker:(id)a0;
- (void)_updateSizePickerItemIfNeeded;
- (void)_updateTableViewSelection;

@end
