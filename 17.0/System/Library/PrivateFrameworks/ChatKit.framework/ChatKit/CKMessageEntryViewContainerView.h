@class NSLayoutConstraint;
@protocol CKMessageEntryViewContainerViewDelegate;

@interface CKMessageEntryViewContainerView : UIView

@property (weak, nonatomic) id<CKMessageEntryViewContainerViewDelegate> entryViewContainerViewDelegate;
@property (retain, nonatomic) NSLayoutConstraint *entryViewStuckToChatControllerBottomLayoutConstraint;

- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;

@end
