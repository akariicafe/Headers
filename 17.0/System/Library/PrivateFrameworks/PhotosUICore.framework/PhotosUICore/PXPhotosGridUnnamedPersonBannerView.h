@class NSString, NSShadow, PXFeatureSpec, UIButton;
@protocol PXPhotosGridUnnamedPersonBannerDelegate;

@interface PXPhotosGridUnnamedPersonBannerView : UIView <PXPhotosBannerView>

@property (readonly, nonatomic) NSString *actionString;
@property (readonly, nonatomic) NSShadow *buttonShadow;
@property (readonly, nonatomic) UIButton *primaryActionButton;
@property (nonatomic) long long type;
@property (retain, nonatomic) PXFeatureSpec *spec;
@property (weak, nonatomic) id<PXPhotosGridUnnamedPersonBannerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithType:(long long)a0;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_handlePrimaryAction;
- (void)_updateButtonConfiguration;

@end
