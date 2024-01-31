@class UIImageView, NSString, UIView;
@protocol CKCatchUpButtonDelegate;

@interface CKCatchUpButton : UIView <UIGestureRecognizerDelegate>

@property (retain, nonatomic) UIView *container;
@property (retain, nonatomic) UIImageView *arrow;
@property (weak, nonatomic) id<CKCatchUpButtonDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
