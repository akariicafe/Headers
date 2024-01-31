@class SUUIClientContext;

@interface SUUIHandleRulesSettingsHeaderFooterDescription : SUUISettingsHeaderFooterDescription {
    SUUIClientContext *_clientContext;
}

@property (nonatomic) BOOL showInvalid;

- (void).cxx_destruct;
- (id)text;
- (Class)_viewClassForSettingsHeaderFooterDescription:(id)a0;
- (id)initWithClientContext:(id)a0;

@end
