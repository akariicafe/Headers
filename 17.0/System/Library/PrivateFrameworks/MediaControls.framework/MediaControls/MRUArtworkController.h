@class MRUImageLoader, MSVTimer, MPArtworkCatalog, UIView;
@protocol MRUArtworkControllerDelegate;

@interface MRUArtworkController : NSObject

@property (retain, nonatomic) MRUImageLoader *imageLoader;
@property (retain, nonatomic) MSVTimer *artworkTimer;
@property (nonatomic) struct CGSize { double width; double height; } artworkFittingSize;
@property (nonatomic) double artworkLoadingTimeout;
@property (nonatomic) struct CGSize { double width; double height; } preferredContentSize;
@property (retain, nonatomic) MPArtworkCatalog *catalog;
@property (weak, nonatomic) UIView<MRUArtworkControllerDelegate> *delegate;

- (void)updateArtworkFittingSize;
- (id)init;
- (void).cxx_destruct;

@end
