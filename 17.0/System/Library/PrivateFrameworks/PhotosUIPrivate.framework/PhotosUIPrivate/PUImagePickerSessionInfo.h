@class PHCollectionList;

@interface PUImagePickerSessionInfo : PUSessionInfo {
    BOOL _isLimitedLibraryPicker;
}

@property (retain, nonatomic) PHCollectionList *rootCollectionList;

- (BOOL)isLimitedLibraryPicker;
- (void).cxx_destruct;
- (id)initWithPhotosViewDelegate:(id)a0 loadingStatusManager:(id)a1 allowMultipleSelection:(BOOL)a2 limitedLibrary:(BOOL)a3;
- (BOOL)isForAssetPicker;
- (BOOL)isSelectingAssets;

@end
