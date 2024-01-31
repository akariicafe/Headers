@class NSString, NSData;

@interface PKPaymentVehicleManufacturerResponse : PKPaymentWebServiceResponse

@property (readonly, copy, nonatomic) NSString *encryptionScheme;
@property (readonly, copy, nonatomic) NSString *ephemeralPublicKey;
@property (readonly, copy, nonatomic) NSString *publicKeyHash;
@property (readonly, copy, nonatomic) NSData *encryptedData;

- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (id)initWithEncryptionScheme:(id)a0 ephemeralPublicKey:(id)a1 publicKeyHash:(id)a2 encryptedData:(id)a3;

@end
