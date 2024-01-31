@class HAPNFCAccessOperationTypeWrapper, HAPNFCAccessDeviceCredentialKeyResponse, HAPNFCAccessIssuerKeyRequest, HAPNFCAccessReaderKeyRequest, HAPNFCAccessReaderKeyResponse, NSString, HAPNFCAccessIssuerKeyResponse, HAPNFCAccessDeviceCredentialKeyRequest;

@interface HAPNFCAccessControl : NSObject <NSCopying, HAPTLVProtocol>

@property (retain, nonatomic) HAPNFCAccessOperationTypeWrapper *operationType;
@property (retain, nonatomic) HAPNFCAccessIssuerKeyRequest *issuerKeyRequest;
@property (retain, nonatomic) HAPNFCAccessIssuerKeyResponse *issuerKeyResponse;
@property (retain, nonatomic) HAPNFCAccessDeviceCredentialKeyRequest *deviceCredentialKeyRequest;
@property (retain, nonatomic) HAPNFCAccessDeviceCredentialKeyResponse *deviceCredentialKeyResponse;
@property (retain, nonatomic) HAPNFCAccessReaderKeyRequest *readerKeyRequest;
@property (retain, nonatomic) HAPNFCAccessReaderKeyResponse *readerKeyResponse;
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
- (id)initWithOperationType:(id)a0 issuerKeyRequest:(id)a1 issuerKeyResponse:(id)a2 deviceCredentialKeyRequest:(id)a3 deviceCredentialKeyResponse:(id)a4 readerKeyRequest:(id)a5 readerKeyResponse:(id)a6;
- (id)serializeWithError:(id *)a0;

@end
