@interface BiometricKitUI : NSObject {
    BOOL _triggeredfromApplePay;
}

+ (id)sharedInstance;

- (id)getEnrollUIViewController:(int)a0 bundleName:(id)a1;
- (void)invalidateApplePayTrigger;
- (void)setTriggeredFromApplePay;
- (BOOL)triggeredFromApplePay;

@end
