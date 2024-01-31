@interface MapsUI.TransitConnectionsSectionView : MUPlaceVerticalCardContainerView <MUPlaceVerticalCardContainerViewDelegate> {
    void /* unknown type, empty encoding */ connectionsDelegate;
    void /* unknown type, empty encoding */ connectionViewModels;
}

- (void)verticalCardContainerView:(id)a0 didSelectRow:(id)a1 atIndex:(unsigned long long)a2;
- (BOOL)verticalCardContainerView:(id)a0 shouldHighlightRowAtIndex:(unsigned long long)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithShowsSeparators:(BOOL)a0;

@end
