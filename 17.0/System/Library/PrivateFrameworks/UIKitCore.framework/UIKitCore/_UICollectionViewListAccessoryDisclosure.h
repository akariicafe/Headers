@class UIControl, NSString, UIColor, UIImage, UIImageView, UIMenu;
@protocol UITableConstants;

@interface _UICollectionViewListAccessoryDisclosure : UIControl <UIMenuForcedAutomaticSelectionDelegate, _UICollectionViewListAccessoryDisclosureView> {
    UIImageView *_imageView;
}

@property (retain, nonatomic) UIMenu *menu;
@property (copy, nonatomic) id /* block */ selectedElementDidChangeHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UIControl *control;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) id<UITableConstants> constants;
@property (retain, nonatomic) UIColor *accessoryTintColor;
@property (copy, nonatomic) id /* block */ actionHandler;
@property (nonatomic) BOOL rotated;
@property (nonatomic) double rotationAngle;

- (id)viewForLastBaselineLayout;
- (id)viewForFirstBaselineLayout;
- (unsigned long long)_controlEventsForActionTriggered;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })_minimumSizeForHitTesting;
- (id)contextMenuInteraction:(id)a0 configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_executeActionHandler;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_updateRotation;
- (double)_enforcedWidthForWidth:(double)a0;
- (void)forcedSelectionOfMenu:(id)a0 willChangeTo:(id)a1;
- (id)initWithConstants:(id)a0;

@end
