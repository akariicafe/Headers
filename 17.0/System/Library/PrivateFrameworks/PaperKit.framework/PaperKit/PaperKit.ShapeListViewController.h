@interface PaperKit.ShapeListViewController : UIViewController {
    void /* unknown type, empty encoding */ stackView;
    void /* unknown type, empty encoding */ stackViewCols;
    void /* unknown type, empty encoding */ horizontalStackViews;
    void /* unknown type, empty encoding */ preferredPopoverSize;
    void /* unknown type, empty encoding */ contentViewMargin;
    void /* unknown type, empty encoding */ itemSize;
    void /* unknown type, empty encoding */ horizontalInterItemSpacing;
    void /* unknown type, empty encoding */ verticalInterItemSpacing;
    void /* unknown type, empty encoding */ delegate;
}

- (void)viewDidLoad;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)didSelectAddTriangle:(id)a0 withEvent:(id)a1;
- (void)didSelectAddArrow:(id)a0 withEvent:(id)a1;
- (void)didSelectAddArrowShape:(id)a0 withEvent:(id)a1;
- (void)didSelectAddChatBubble:(id)a0 withEvent:(id)a1;
- (void)didSelectAddLine:(id)a0 withEvent:(id)a1;
- (void)didSelectAddOval:(id)a0 withEvent:(id)a1;
- (void)didSelectAddPolygon:(id)a0 withEvent:(id)a1;
- (void)didSelectAddRectangle:(id)a0 withEvent:(id)a1;
- (void)didSelectAddRoundedRect:(id)a0 withEvent:(id)a1;
- (void)didSelectAddStar:(id)a0 withEvent:(id)a1;

@end
