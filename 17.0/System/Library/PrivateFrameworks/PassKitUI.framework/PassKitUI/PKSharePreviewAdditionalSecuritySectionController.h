@class NSString, PKPassShareActivationOptions, PKPassShareInitiationContext;
@protocol PKSharePreviewAdditionalSecuritySectionControllerDelegate;

@interface PKSharePreviewAdditionalSecuritySectionController : PKPassShareSectionController {
    unsigned long long _mode;
    PKPassShareActivationOptions *_activationOptions;
    PKPassShareInitiationContext *_context;
    id<PKSharePreviewAdditionalSecuritySectionControllerDelegate> _delegate;
    NSString *_footerText;
}

- (id)init;
- (void)setContext:(id)a0;
- (void).cxx_destruct;
- (void)didSelectItem:(id)a0;
- (void)_activationCodeSwitchValueChanged:(id)a0;
- (id)_initWithMode:(unsigned long long)a0 activationOptions:(id)a1 context:(id)a2 delegate:(id)a3;
- (id)decorateListCell:(id)a0 forRowItem:(id)a1;
- (id)footerAttributedStringForIdentifier:(id)a0;
- (id)headerAttributedStringForIdentifier:(id)a0;
- (id)initWithInitiationContext:(id)a0 delegate:(id)a1;
- (id)initWithMode:(unsigned long long)a0 activationOptions:(id)a1 delegate:(id)a2;
- (void)reloadItemsAnimated:(BOOL)a0;

@end
