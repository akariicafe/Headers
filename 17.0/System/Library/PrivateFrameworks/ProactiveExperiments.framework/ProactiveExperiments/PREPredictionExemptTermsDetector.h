@class NSDictionary;

@interface PREPredictionExemptTermsDetector : NSObject {
    NSDictionary *_languageToExemptTerms;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)_warmTermsIfNecessary;
- (BOOL)checkForExemptContentInText:(id)a0 languageCode:(id)a1;

@end
