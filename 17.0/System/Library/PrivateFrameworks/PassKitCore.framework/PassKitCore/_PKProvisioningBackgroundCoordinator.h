@interface _PKProvisioningBackgroundCoordinator : NSObject {
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ configuration;
    void /* unknown type, empty encoding */ previouslyAcceptedTerms;
    void /* unknown type, empty encoding */ completion;
    void /* unknown type, empty encoding */ preflightCompletion;
    void /* unknown type, empty encoding */ composer;
    void /* unknown type, empty encoding */ fieldsModel;
    void /* unknown type, empty encoding */ provisionedPasses;
    void /* unknown type, empty encoding */ didUpgradeToStrongPasscode;
}

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)cancel;
- (void)startWithCompletion:(id /* block */)a0;
- (id)archivedState;
- (id)initWithPkContext:(id)a0 credential:(id)a1 previouslyAcceptedTerms:(BOOL)a2;

@end
