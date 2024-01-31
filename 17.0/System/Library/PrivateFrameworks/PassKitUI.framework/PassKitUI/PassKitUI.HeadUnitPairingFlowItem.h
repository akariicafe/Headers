@interface PassKitUI.HeadUnitPairingFlowItem : NSObject <CARSetupHeadUnitPairingPromptDelegate, PRXFlowDelegate> {
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ presentationConfiguration;
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ hupPrompt;
}

- (void)headUnitPairingPrompt:(id)a0 didFinishWithResult:(BOOL)a1;
- (void)proxCardFlowDidDismiss;
- (id)init;
- (void).cxx_destruct;

@end
