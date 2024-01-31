@class SUUIJSColor;

@interface SUUIJSAnalyzedImageColors : IKJSObject <SUUIJSAnalyzedImageColors>

@property (readonly, nonatomic) SUUIJSColor *backgroundColor;
@property (readonly, nonatomic) SUUIJSColor *textPrimaryColor;
@property (readonly, nonatomic) SUUIJSColor *textSecondaryColor;
@property (readonly, nonatomic) BOOL isBackgroundLight;

- (void).cxx_destruct;
- (id)initWithAppContext:(id)a0 analyzedImageColors:(id)a1;

@end
