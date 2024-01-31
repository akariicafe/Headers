@class IDSServerCertificate, NSData;

@interface IDSRegistrationCertificate : NSObject

@property (readonly, nonatomic) IDSServerCertificate *backingCertificate;
@property (readonly, nonatomic) NSData *dataRepresentation;

- (id)initWithDataRepresentation:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithBackingCertificate:(id)a0;

@end
