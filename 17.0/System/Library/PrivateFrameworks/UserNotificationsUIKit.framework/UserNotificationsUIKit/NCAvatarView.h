@class UIImageView, NCNotificationRequest, MTMaterialView;

@interface NCAvatarView : UIView <NSCopying> {
    long long _userInterfaceStyle;
    UIImageView *_imageView;
    MTMaterialView *_backgroundMaterialView;
    BOOL _isGeneratingAvatarImage;
}

@property (readonly, weak, nonatomic) NCNotificationRequest *notificationRequest;
@property (readonly, nonatomic) double pointSize;
@property (nonatomic, getter=isMaterialBacked) BOOL materialBacked;

+ (BOOL)isAvatarPossibleWithNotificationRequest:(id)a0;

- (id)initWithNotificationRequest:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_configureBackgroundMaterialViewIfNecessary;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_configureImageViewIfNecessary;
- (void)_loadImage:(id)a0 needsFormatting:(BOOL)a1 animated:(BOOL)a2;
- (void)_updateAvatarImageIfNecessary;
- (id)initWithNotificationRequest:(id)a0 compatibleWithInitialTraitCollection:(id)a1;
- (id)initWithNotificationRequest:(id)a0 pointSize:(double)a1 compatibleWithInitialTraitCollection:(id)a2;

@end
