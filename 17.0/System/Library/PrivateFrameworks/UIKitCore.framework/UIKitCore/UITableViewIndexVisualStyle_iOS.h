@class NSString, UITableViewIndex, UIFont;

@interface UITableViewIndexVisualStyle_iOS : NSObject <UITableViewIndexVisualStyle>

@property (nonatomic) double verticalTextHeightEstimate;
@property (weak, nonatomic) UITableViewIndex *tableViewIndex;
@property (retain, nonatomic) UIFont *font;
@property (readonly, nonatomic) double indexWidth;
@property (readonly, nonatomic) double lineSpacing;
@property (readonly, nonatomic) double minLineSpacing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)containerViewForTableViewIndex:(id)a0;

- (void).cxx_destruct;
- (void)didDrawEntryAtIndex:(long long)a0 indexBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 entryBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 context:(struct CGContext { } *)a3 originalColor:(id)a4;
- (void)handleTouch:(id)a0 withEvent:(id)a1 touchedEntryIndex:(long long)a2;
- (id)initWithTableViewIndex:(id)a0;
- (void)selectedSectionDidChange:(long long)a0;
- (void)trackingDidBegin;
- (void)trackingDidEnd;
- (void)willDrawEntryAtIndex:(long long)a0 indexBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 entryBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 context:(struct CGContext { } *)a3 originalColor:(id)a4;

@end
