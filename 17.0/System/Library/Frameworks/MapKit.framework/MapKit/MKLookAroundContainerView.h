@class UIColor, NSArray, UIActivityIndicatorView, UIView, MKLookAroundContainerBadgeView, MKMapItem;
@protocol MKLookAroundContainerViewDelegate, NSObject;

@interface MKLookAroundContainerView : UIView {
    UIColor *_dimmingViewBackgroundColorGreyOpaque;
    UIColor *_dimmingViewBackgroundColorBlackOpaque;
    UIColor *_dimmingViewBackgroundColorBlackTranslucent;
    UIColor *_dimmingViewBackgroundColorClear;
    UIColor *_dimmingViewBackgroundColorPhotosOpaque;
    NSArray *_badgeConstraints;
}

@property (readonly, nonatomic) UIColor *dimmingViewBackgroundColorGreyOpaque;
@property (readonly, nonatomic) UIColor *dimmingViewBackgroundColorBlackOpaque;
@property (readonly, nonatomic) UIColor *dimmingViewBackgroundColorBlackTranslucent;
@property (readonly, nonatomic) UIColor *dimmingViewBackgroundColorClear;
@property (readonly, nonatomic) UIColor *dimmingViewBackgroundColorPhotosOpaque;
@property (nonatomic) BOOL floatingDimmingStyle;
@property (nonatomic) BOOL photosDimmingStyle;
@property (nonatomic) BOOL pipDimmingStyle;
@property (retain, nonatomic) UIView *dimmingView;
@property (retain, nonatomic) MKLookAroundContainerBadgeView *badgeView;
@property (retain, nonatomic) UIActivityIndicatorView *activityIndicator;
@property (retain, nonatomic) id<NSObject> lookAroundViewDidBecomeAdequatelyDrawnObserver;
@property (retain, nonatomic) id<NSObject> lookAroundViewDidBecomeFullyDrawnObserver;
@property (weak, nonatomic) id<MKLookAroundContainerViewDelegate> delegate;
@property (retain, nonatomic) MKMapItem *mapItem;
@property (nonatomic, getter=isBadgeOnLeadingEdge) BOOL badgeOnLeadingEdge;
@property (nonatomic, getter=isBadgeHidden) BOOL badgeHidden;
@property (nonatomic) unsigned long long dimmingState;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)didAddSubview:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;
- (void)setBadgeHidden:(BOOL)a0 animated:(BOOL)a1;
- (void)cancelIfPresent;
- (void)_commonInitWithLookAroundView:(id)a0;
- (void)_setDimmingViewHidden:(BOOL)a0 loading:(BOOL)a1 animated:(BOOL)a2;
- (void)_updateBadgeConstraints;
- (void)_updateDimmingStateForLookAroundView:(id)a0 completion:(id /* block */)a1;
- (void)_updateDimmingViewActivityIndicator;
- (void)_updateDimmingViewBackgroundColor;
- (void)infoCardThemeChanged;
- (id)initWithFloatingDimmingStyle:(BOOL)a0;
- (id)initWithLookAroundView:(id)a0;
- (id)initWithPhotosDimmingStyle:(BOOL)a0;
- (id)lookAroundViewIfPresent;
- (void)setDimmingState:(unsigned long long)a0 animated:(BOOL)a1;
- (void)setMapItem:(id)a0 wantsCloseUpView:(BOOL)a1;

@end
