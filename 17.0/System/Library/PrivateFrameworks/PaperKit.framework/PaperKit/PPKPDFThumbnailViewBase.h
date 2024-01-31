@class UIColor, NSArray, PDFView, PPKPDFThumbnailsCollectionViewBase;
@protocol PPKPDFThumbnailDataSourceDelegate, PPKPDFThumbnailContextMenuDelegate;

@interface PPKPDFThumbnailViewBase : UIView {
    PDFView *_pdfView;
    struct CGSize { double width; double height; } _thumbnailSize;
    UIColor *_backgroundColor;
    long long _layoutMode;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _contentInset;
    PPKPDFThumbnailsCollectionViewBase *_iconsView;
}

@property (weak, nonatomic) id<PPKPDFThumbnailContextMenuDelegate> thumbnailContextMenuDelegate;
@property (weak, nonatomic) id<PPKPDFThumbnailDataSourceDelegate> thumbnailDataSourceDelegate;
@property (nonatomic) BOOL allowsPageReordering;
@property (weak, nonatomic) PDFView *PDFView;
@property (copy, nonatomic) UIColor *backgroundColor;
@property (readonly, nonatomic) NSArray *selectedPages;
@property (nonatomic) struct CGSize { double x0; double x1; } thumbnailSize;
@property (nonatomic) long long layoutMode;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } contentInset;

- (void)_updateLayout;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_commonInit;
- (void)setupNotifications;
- (void)currentPageChanged:(id)a0;
- (void)documentChanged:(id)a0;
- (void)documentMutated:(id)a0;
- (void)documentUnlocked:(id)a0;
- (void)pageChanged:(id)a0;
- (void)reloadPageAt:(long long)a0;
- (void)updateNotificationsForDocument;

@end
