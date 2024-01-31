@class PXImportItemViewModel, UITextField, NSString;
@protocol PUImportOneUpCellDisplayDelegate;

@interface PUImportOneUpCell : PUPhotosSharingGridCell <PXChangeObserver>

@property (retain, nonatomic) UITextField *debugTextField;
@property (nonatomic) long long thumbnailRequestID;
@property (weak, nonatomic) id<PUImportOneUpCellDisplayDelegate> displayDelegate;
@property (retain, nonatomic) PXImportItemViewModel *importItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)alphaForSelectedCells;

- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)dealloc;
- (void)setHighlighted:(BOOL)a0;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;
- (void)_commonPUImportOneUpCellInitialization;
- (void *)contextForObservingViewModelChanges;
- (void)refreshThumbnail;
- (void)setImage:(id)a0 isPlaceholder:(BOOL)a1;
- (void)updateBadge;
- (void)updateDebugLabel:(id)a0;
- (void)updatePhotoViewForImportItem:(id)a0;
- (void)updateSelectedVisualAppearance;

@end
