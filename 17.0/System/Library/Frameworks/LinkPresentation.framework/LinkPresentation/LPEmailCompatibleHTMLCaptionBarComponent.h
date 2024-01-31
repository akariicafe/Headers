@class LPCaptionBarPresentationProperties, LPCaptionBarStyle;

@interface LPEmailCompatibleHTMLCaptionBarComponent : LPHTMLComponent {
    LPCaptionBarStyle *_style;
    LPCaptionBarPresentationProperties *_presentationProperties;
}

+ (id)baseRules;
+ (id)ruleDictionaryForStyle:(id)a0;

- (void).cxx_destruct;
- (void)buildComponents;
- (id)initWithStyle:(id)a0 presentationProperties:(id)a1 themePath:(id)a2 generator:(id)a3;

@end
