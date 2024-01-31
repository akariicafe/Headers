@class NSArray, NSString, UIInterfaceActionGroupView, NSMutableDictionary;

@interface PLInterfaceActionGroupView : UIView <MTVisualStylingProviderObservingPrivate, MTVisualStylingRequiring> {
    UIInterfaceActionGroupView *_actionsGroupView;
    BOOL _actionsDirty;
    NSMutableDictionary *_categoriesToProviders;
}

@property (retain, nonatomic) NSArray *actions;
@property (nonatomic) double cornerRadius;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSArray *requiredVisualStyleCategories;

+ (void)initialize;

- (void)setVisualStylingProvider:(id)a0 forCategory:(long long)a1;
- (id)visualStylingProviderForCategory:(long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)providedStylesDidChangeForProvider:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)_newInterfaceActionGroupViewWithActions:(id)a0;
- (void)_updateStylingOfInterfaceActionGroupView:(id)a0;

@end
