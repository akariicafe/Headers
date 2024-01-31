@class UITapGestureRecognizer;
@protocol CKSendMenuPopoverPresentationDimmingViewDelegate;

@interface CKSendMenuPopoverPresentationDimmingView : UIView

@property (retain, nonatomic) UITapGestureRecognizer *dismissGestureRecognizer;
@property (nonatomic, getter=isActive, setter=setActive:) BOOL active;
@property (weak, nonatomic) id<CKSendMenuPopoverPresentationDimmingViewDelegate> delegate;

- (id)init;
- (void)_handleTap:(id)a0;
- (void).cxx_destruct;

@end
