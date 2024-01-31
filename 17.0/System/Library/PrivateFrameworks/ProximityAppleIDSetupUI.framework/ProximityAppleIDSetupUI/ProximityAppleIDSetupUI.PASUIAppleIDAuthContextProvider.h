@class NSMutableURLRequest;

@interface ProximityAppleIDSetupUI.PASUIAppleIDAuthContextProvider : NSObject <AKAppleIDAuthenticationInAppContextDelegate> {
    void /* unknown type, empty encoding */ delegate;
}

- (void)contextDidDismissLoginAlertController:(id)a0;
- (void)contextDidEndPresentingSecondaryUI:(id)a0;
- (void)contextDidPresentLoginAlertController:(id)a0;
- (void)contextWillBeginPresentingSecondaryUI:(id)a0;
- (void)contextWillDismissLoginAlertController:(id)a0;
- (id)remoteUIStyle;
- (void)signAdditionalHeadersWithRequest:(NSMutableURLRequest *)a0 withCompletion:(void (^)(NSMutableURLRequest *))a1;
- (void)willPresentModalNavigationController:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
