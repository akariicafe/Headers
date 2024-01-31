@class UIInterfaceActionSeparatorAttributes, UIInterfaceActionHighlightAttributes;

@interface UIInterfaceActionOverrideVisualStyle : UIInterfaceActionVisualStyle

@property double customSelectionHighlightContinuousCornerRadius;
@property (nonatomic) BOOL alignActionSeparatorLeadingEdgeWithContent;
@property (retain, nonatomic) UIInterfaceActionSeparatorAttributes *customSeparatorAttributes;
@property (retain, nonatomic) UIInterfaceActionHighlightAttributes *customActionHighlightAttributes;
@property (copy, nonatomic) id /* block */ customTitleLabelFontProviderForViewState;

+ (id)styleOverride;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)actionTitleLabelFontForViewState:(id)a0;
- (id)newActionBackgroundViewForViewState:(id)a0;
- (id)newActionSeparatorViewForGroupViewState:(id)a0;

@end
