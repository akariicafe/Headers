@class UITableViewCell, UIButtonConfiguration;

@interface CompletionArrowView : UIButton

@property (weak, nonatomic) UITableViewCell *parentCell;
@property (nonatomic) BOOL usesDownBackwardCompletionArrow;
@property (retain, nonatomic) UIButtonConfiguration *buttonConfiguration;

- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
