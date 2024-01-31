@class UILabel, PXPeopleScalableAvatarView, UIContentUnavailableView;
@protocol PXPerson;

@interface PXPeopleConfirmationLoadingView : UIView

@property (readonly, nonatomic) UIContentUnavailableView *contentLoadingView;
@property (readonly, nonatomic) UILabel *noneFoundLabel;
@property (readonly, nonatomic) id<PXPerson> person;
@property (readonly, nonatomic) PXPeopleScalableAvatarView *avatarView;
@property (nonatomic) long long loadingState;

- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_updateViewVisibilityForLoadingStateInitial;
- (void)_updateViewVisibilityForLoadingStateLoading;
- (void)_updateViewVisibilityForLoadingStateNoneFound;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 person:(id)a1;

@end
