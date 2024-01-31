@class NSString, UIActivityIndicatorView, PUPhotoView, UIView, UITextField, PXImportItemViewModel;
@protocol PUCameraImportItemCellDelegate;

@interface PUCameraImportItemCell : UICollectionViewCell <PXChangeObserver> {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _badgeTapZone;
}

@property (nonatomic) long long badgeType;
@property (nonatomic) BOOL selectable;
@property (retain, nonatomic) UIView *badgeContainerView;
@property (retain, nonatomic) UIView *badgeView;
@property (retain, nonatomic) UIActivityIndicatorView *spinner;
@property (retain, nonatomic) PUPhotoView *photoView;
@property (retain, nonatomic) UITextField *debugTextField;
@property (nonatomic) BOOL needsBadgeUpdate;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } scaledDisplayRect;
@property (nonatomic) long long thumbnailRequestID;
@property (weak, nonatomic) id<PUCameraImportItemCellDelegate> delegate;
@property (retain, nonatomic) PXImportItemViewModel *representedImportItem;
@property (readonly, nonatomic) BOOL needsThumbnailRefresh;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)alphaForSelectedCells;

- (void)clearImage;
- (id)accessibilityLabel;
- (long long)dragState;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)dealloc;
- (unsigned long long)accessibilityTraits;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)accessibilityCustomActions;
- (void).cxx_destruct;
- (BOOL)isAccessibilityElement;
- (void)layoutSubviews;
- (void)accessibilityElementDidBecomeFocused;
- (void)_enterOneUpAction;
- (void)_fetchThumbnailReady;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_filledPhotosRectForImage:(id)a0;
- (void)_selectAction;
- (void)cancelThumbnailLoadIfActive;
- (void)handleTapGesture:(id)a0;
- (void)refreshThumbnail;
- (void)setCachedImage:(id)a0 isPlaceholder:(BOOL)a1;
- (void)setPhotoImage:(id)a0 withSize:(struct CGSize { double x0; double x1; })a1 fillMode:(long long)a2 videoDuration:(double)a3 isPlaceholder:(BOOL)a4;
- (BOOL)shouldBeginGestureForPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)showActivityBadge:(BOOL)a0;
- (void)updateBadgeUIIfNeeded;
- (void)updateDebugLabel:(id)a0;

@end
