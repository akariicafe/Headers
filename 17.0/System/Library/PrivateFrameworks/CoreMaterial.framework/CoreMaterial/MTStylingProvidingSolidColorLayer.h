@class NSMutableDictionary;

@interface MTStylingProvidingSolidColorLayer : CALayer

@property (retain, nonatomic) NSMutableDictionary *cmStylingProviders;

- (void)setBackgroundColor:(struct CGColor { } *)a0;
- (id)visualStylingProviderForCategory:(id)a0;
- (void).cxx_destruct;
- (id)_fillDarkStyleSet;
- (id)_fillLightStyleSet;
- (id)_strokeDarkStyleSet;
- (id)_strokeLightStyleSet;
- (id)_styleSetForCategory:(id)a0;
- (id)_styleSetForCategory:(id)a0 styleDefinitions:(id)a1;
- (id)_styleSetNameForCategory:(id)a0;
- (void)_updateVisualStylingProviderForCategory:(id)a0;
- (void)_updateVisualStylingProviders;

@end
