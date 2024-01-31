@class VNBarcodeObservation, NSString, CIBarcodeDescriptor;

@interface VKRecognizedBarcode : VKRecognizedItem

@property (readonly, nonatomic) VNBarcodeObservation *observation;
@property (readonly, nonatomic) NSString *symbology;
@property (readonly, nonatomic) CIBarcodeDescriptor *barcodeDescriptor;
@property (readonly, nonatomic) NSString *payloadStringValue;

- (id)description;
- (id)initWithFrameInfo:(id)a0 barcodeObservation:(id)a1;

@end
