@interface VideosUI.FederatedContentButton : VUIButton {
    void /* unknown type, empty encoding */ playIdentifier;
    void /* unknown type, empty encoding */ connectIdentifier;
    void /* unknown type, empty encoding */ federatedChannelDictionary;
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ federatedAppRequiresConsent;
}

- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)updateTitle;
- (void)handleVPPADismisedNotification:(id)a0;
- (id)initWithType:(unsigned long long)a0 interfaceStyle:(unsigned long long)a1;

@end
