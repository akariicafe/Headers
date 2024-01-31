@interface UIInterfaceActionConcreteVisualStyle_ModernAppleTV : UIInterfaceActionConcreteVisualStyle_AppleTV

- (double)contentCornerRadius;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentMargin;
- (double)actionSpacingForGroupViewState:(id)a0;
- (double)_actionBackgroundCornerRadius;
- (id)_vibrancyStyleColorForUnfocusedTitleLabelWithTintColor:(id)a0;
- (double)actionSectionSpacing;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })actionSequenceEdgeInsets;
- (id)actionTitleLabelColorForViewState:(id)a0;
- (id)actionTitleLabelCompositingFilterForViewState:(id)a0;
- (id)actionTitleLabelFontForViewState:(id)a0;
- (id)actionViewStateForAttachingToActionRepresentationView:(id)a0;
- (BOOL)allowsZeroSizedSectionSeparators;
- (void)configureAttributesForActionScrollView:(id)a0 groupViewState:(id)a1;
- (struct CGSize { double x0; double x1; })minimumActionContentSize;
- (id)newActionBackgroundViewForViewState:(id)a0;
- (id)newGroupBackgroundViewWithGroupViewState:(id)a0;

@end
