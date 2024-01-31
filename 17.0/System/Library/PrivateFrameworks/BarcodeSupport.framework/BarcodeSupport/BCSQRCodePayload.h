@class NSString, CIBarcodeDescriptor;

@interface BCSQRCodePayload : NSObject <BCSCodePayload> {
    CIBarcodeDescriptor *_barcodeDescriptor;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long codeType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithBarcodeDescriptor:(id)a0;
- (void)savePayloadInUserActivity:(id)a0;

@end
