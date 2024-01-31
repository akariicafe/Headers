@class SUUIViewElement;

@interface SUUISettingsHeaderFooterDescription : NSObject {
    SUUIViewElement *_viewElement;
}

+ (id)_settingsHeaderFooterDescriptionWithFooterElement:(id)a0;
+ (id)_settingsHeaderFooterDescriptionWithHeaderElement:(id)a0;
+ (id)settingsHeaderFooterDescriptionWithViewElement:(id)a0;
+ (Class)viewClassForSettingsHeaderFooterDescription:(id)a0;

- (void).cxx_destruct;
- (Class)_viewClassForSettingsHeaderFooterDescription:(id)a0;
- (id)initWithViewElement:(id)a0;
- (id)viewElement;

@end
