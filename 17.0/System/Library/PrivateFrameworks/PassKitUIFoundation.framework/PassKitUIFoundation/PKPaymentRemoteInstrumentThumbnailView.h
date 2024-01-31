@class UIImageView;

@interface PKPaymentRemoteInstrumentThumbnailView : UIView

@property (retain, nonatomic) UIImageView *placeholderImageView;
@property (retain, nonatomic) UIImageView *cardImageView;

- (void).cxx_destruct;
- (void)_prepareConstraints;
- (id)initWithRemotePaymentInstrument:(id)a0;
- (id)initWithRemotePaymentInstrument:(id)a0 thumbnailSize:(struct CGSize { double x0; double x1; })a1;
- (void)_updateCardImage:(struct CGImage { } *)a0 size:(struct CGSize { double x0; double x1; })a1;

@end
