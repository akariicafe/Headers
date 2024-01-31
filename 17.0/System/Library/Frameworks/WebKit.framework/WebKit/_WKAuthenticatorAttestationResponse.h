@class NSData, NSArray;

@interface _WKAuthenticatorAttestationResponse : _WKAuthenticatorResponse

@property (readonly, nonatomic) NSData *attestationObject;
@property (copy, nonatomic) NSArray *transports;

- (void)dealloc;
- (id)initWithClientDataJSON:(id)a0 rawId:(id)a1 extensionOutputsCBOR:(id)a2 attestationObject:(id)a3 attachment:(long long)a4 transports:(id)a5;
- (id)initWithClientDataJSON:(id)a0 rawId:(id)a1 extensions:(void *)a2 attestationObject:(id)a3 attachment:(long long)a4 transports:(id)a5;

@end
