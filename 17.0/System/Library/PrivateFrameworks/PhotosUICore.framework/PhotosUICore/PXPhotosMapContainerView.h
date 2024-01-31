@class PXMapOptionsView, MKMapView;

@interface PXPhotosMapContainerView : UIView

@property (retain, nonatomic) PXMapOptionsView *mapOptionsView;
@property (retain, nonatomic) MKMapView *bodyView;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)updateWithConfiguration:(id)a0;

@end
