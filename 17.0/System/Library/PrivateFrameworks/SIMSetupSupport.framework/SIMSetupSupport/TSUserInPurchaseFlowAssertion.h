@interface TSUserInPurchaseFlowAssertion : NSObject {
    int _assertionCounter;
}

+ (id)sharedInstance;

- (id)init;
- (void)assertUserInPurchaseFlowStartOver:(BOOL)a0;
- (void)deassertUserInPurchaseFlowWithForce:(BOOL)a0;

@end
