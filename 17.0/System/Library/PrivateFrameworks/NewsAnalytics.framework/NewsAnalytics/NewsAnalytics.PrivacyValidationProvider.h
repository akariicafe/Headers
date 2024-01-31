@interface NewsAnalytics.PrivacyValidationProvider : NSObject <FCNewsAppConfigurationObserving> {
    void /* unknown type, empty encoding */ appConfigurationManager;
    void /* unknown type, empty encoding */ privacyValidation;
}

- (void)configurationManager:(id)a0 appConfigurationDidChange:(id)a1;
- (id)init;
- (void).cxx_destruct;

@end
