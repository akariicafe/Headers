@class UIGraphicsImageRenderer, UIImage, CAShapeLayer, NSObject, PHAssetCollection;
@protocol OS_dispatch_queue, OS_os_log;

@interface PXPeopleAvatarView : UIImageView {
    BOOL _isRTL;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _ivarLock;
}

@property (class, readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;

@property (retain, nonatomic) UIGraphicsImageRenderer *imageRenderer;
@property (retain, nonatomic) UIImage *firstAvatar;
@property (retain, nonatomic) UIImage *secondAvatar;
@property (retain, nonatomic) UIImage *thirdAvatar;
@property (retain, nonatomic) CAShapeLayer *overlayLayer;
@property (readonly) NSObject<OS_os_log> *log;
@property (retain, nonatomic) PHAssetCollection *sharedAlbumCollection;
@property (nonatomic) unsigned long long avatarSizeClass;
@property (nonatomic, getter=isEnabled) BOOL enabled;

+ (struct CGSize { double x0; double x1; })_sizeForNumberOfAvatars:(unsigned long long)a0 diameter:(double)a1;
+ (struct CGSize { double x0; double x1; })maxSizeForSizeClass:(unsigned long long)a0;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)accessibilityInvertColorsStatusDidChange:(id)a0;
- (void)_generateAvatars;
- (void)_renderAvatarsForAlbumCollection:(id)a0;
- (void)_requestSubscriberMonogram:(id)a0 diameter:(double)a1 resultHandler:(id /* block */)a2;
- (void)_resetImages;
- (void)_resetViewContents;
- (void)_resetViewContentsIfNeededForAlbumCollection:(id)a0;
- (void)_setContentsImage:(id)a0 withShadowPath:(struct CGPath { } *)a1 forAlbumCollection:(id)a2;
- (void)_setImage:(id)a0 forIndex:(unsigned long long)a1;
- (void)_setImage:(id)a0 forIndex:(long long)a1 albumCollection:(id)a2;
- (void)_updateAvatars;
- (void)embedInView:(id)a0;
- (void)setSharedAlbumCollection:(id)a0 forceLayoutSubscriberAvatars:(BOOL)a1;

@end
