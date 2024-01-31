@class UIImage, UIImageView, UILabel;

@interface ICQDeviceIdentificationView : UIView {
    UIImageView *_deviceImageView;
    UILabel *_deviceNameLabel;
    UILabel *_deviceModelLabel;
}

@property (retain, nonatomic) UIImage *deviceImage;
@property (nonatomic) double topMargin;
@property (nonatomic) double bottomMargin;
@property (nonatomic) double leftExtraMargin;
@property (nonatomic) double imageTextPadding;

+ (void)initialize;

- (void)sizeToFit;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setDeviceImage:(id)a0;
- (id)deviceImage;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 deviceName:(id)a1 deviceIdentifier:(id)a2 imageURL:(id)a3 isCurrentDevice:(BOOL)a4;
- (void)loadImageForDeviceIdentifier:(id)a0 URL:(id)a1;

@end
