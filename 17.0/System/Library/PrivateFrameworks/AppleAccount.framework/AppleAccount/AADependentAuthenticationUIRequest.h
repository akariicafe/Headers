@class NSString;

@interface AADependentAuthenticationUIRequest : AAAppleIDSettingsRequest {
    NSString *_altDSID;
}

- (id)urlString;
- (id)initWithAltDSID:(id)a0;
- (void).cxx_destruct;

@end
