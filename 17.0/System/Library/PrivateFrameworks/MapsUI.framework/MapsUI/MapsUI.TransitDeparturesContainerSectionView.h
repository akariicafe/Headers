@interface MapsUI.TransitDeparturesContainerSectionView : MUPlaceVerticalCardContainerView <MUPlaceVerticalCardContainerViewDelegate> {
    void /* unknown type, empty encoding */ rowFeedbackDelegate;
    void /* unknown type, empty encoding */ departuresContainer;
}

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })_resolvedBottomSeparatorInsetsForView:(id)a0;
- (id)initWithShowsSeparators:(BOOL)a0;
- (void)verticalCardContainerView:(id)a0 didSelectRow:(id)a1 atIndex:(unsigned long long)a2;
- (BOOL)verticalCardContainerView:(id)a0 shouldHighlightRowAtIndex:(unsigned long long)a1;

@end
