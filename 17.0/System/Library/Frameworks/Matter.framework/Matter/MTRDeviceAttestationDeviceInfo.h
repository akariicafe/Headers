@class NSNumber, NSData;

@interface MTRDeviceAttestationDeviceInfo : NSObject

@property (readonly, nonatomic) NSNumber *vendorID;
@property (readonly, nonatomic) NSNumber *productID;
@property (readonly, nonatomic) NSNumber *basicInformationVendorID;
@property (readonly, nonatomic) NSNumber *basicInformationProductID;
@property (readonly, nonatomic) NSData *dacCertificate;
@property (readonly, nonatomic) NSData *dacPAICertificate;
@property (readonly, nonatomic) NSData *certificateDeclaration;

- (void).cxx_destruct;
- (id)initWithDACCertificate:(id)a0 dacPAICertificate:(id)a1 certificateDeclaration:(id)a2 basicInformationVendorID:(id)a3 basicInformationProductID:(id)a4;

@end
