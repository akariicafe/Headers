@class UIView;

@interface AMSUIWebSnapshotView : AMSUICommonView

@property (retain, nonatomic) UIView *snapshot;
@property (nonatomic) double originalRatio;
@property (nonatomic) long long originalInterfaceStyle;
@property (nonatomic) unsigned long long visibilityModifiers;

+ (id)_imageViewForImage:(id)a0;
+ (void)_screenCapFromView:(id)a0 completion:(id /* block */)a1;

- (void)traitCollectionDidChange:(id)a0;
- (void)_updateSnapshot:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (BOOL)_visibilityUnmodified;
- (id)initWithView:(id)a0 completion:(id /* block */)a1;

@end
