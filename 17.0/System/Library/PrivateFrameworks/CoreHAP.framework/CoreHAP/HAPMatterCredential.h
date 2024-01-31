@class HAPReaderKey, NSString, HAPIssuerKey, HAPDeviceCredentialKey;

@interface HAPMatterCredential : NSObject <NSCopying, HAPTLVProtocol>

@property (retain, nonatomic) HAPIssuerKey *issuerKey;
@property (retain, nonatomic) HAPReaderKey *readerKey;
@property (retain, nonatomic) HAPDeviceCredentialKey *deviceCredentialKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)parsedFromData:(id)a0 error:(id *)a1;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)parseFromData:(id)a0 error:(id *)a1;
- (id)initWithIssuerKey:(id)a0 readerKey:(id)a1 deviceCredentialKey:(id)a2;
- (id)serializeWithError:(id *)a0;

@end
