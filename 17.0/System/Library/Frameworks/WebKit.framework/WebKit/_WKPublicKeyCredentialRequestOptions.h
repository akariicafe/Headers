@class NSString, NSArray, _WKAuthenticationExtensionsClientInputs, NSData, NSNumber;

@interface _WKPublicKeyCredentialRequestOptions : NSObject

@property (copy, nonatomic) NSNumber *timeout;
@property (copy, nonatomic) NSString *relyingPartyIdentifier;
@property (copy, nonatomic) NSArray *allowCredentials;
@property (nonatomic) long long userVerification;
@property (nonatomic) long long authenticatorAttachment;
@property (retain, nonatomic) _WKAuthenticationExtensionsClientInputs *extensions;
@property (copy, nonatomic) NSData *extensionsCBOR;

- (id)init;
- (void)dealloc;

@end
