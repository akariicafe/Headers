@class NSString, NSDictionary, NSData, CIBarcodeDescriptor, NSNumber;

@interface VNBarcodeObservation : VNRectangleObservation <VNDataDetectorSupporting> {
    NSString *_cachedPayloadStringValue;
    NSData *_cachedPayloadData;
    NSNumber *_cachedAppClipCodeMetadataValue;
    NSNumber *_cachedIsColorInverted;
    NSNumber *_cachedIsGS1DataCarrier;
    NSString *_cachedSupplementalPayload;
    NSNumber *_cachedSupplementalCompositeType;
    NSData *_cachedSupplementalPayloadRawData;
}

@property (copy, nonatomic, setter=setACBSBarcodeInfo:) NSDictionary *acbsBarcodeInfo;
@property (nonatomic, setter=setMRCDescriptor:) struct __MRCDescriptor { } *mrcDescriptor;
@property (readonly, copy, nonatomic) NSData *payloadDataValue;
@property (readonly, copy, nonatomic) NSNumber *appClipCodeMetadataValue;
@property (readonly, copy, nonatomic) NSString *symbology;
@property (readonly, nonatomic) CIBarcodeDescriptor *barcodeDescriptor;
@property (readonly, copy, nonatomic) NSString *payloadStringValue;
@property (readonly, copy, nonatomic) NSData *payloadData;
@property (readonly, nonatomic) BOOL isGS1DataCarrier;
@property (readonly, nonatomic) BOOL isColorInverted;
@property (readonly, nonatomic) long long supplementalCompositeType;
@property (readonly, copy, nonatomic) NSString *supplementalPayloadString;
@property (readonly, copy, nonatomic) NSData *supplementalPayloadData;

+ (BOOL)supportsSecureCoding;
+ (id)defaultOriginatingRequestClassNameForRequestRevision:(unsigned long long)a0;

- (unsigned long long)hash;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_cachePayloadAndSupplementalPayload;
- (BOOL)_propertyAllowedForRevision;
- (id)getDataDetectorResults:(id *)a0;
- (id)initWithOriginatingRequestSpecifier:(id)a0 symbology:(id)a1 descriptor:(id)a2 boundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (id)initWithOriginatingRequestSpecifier:(id)a0 symbology:(id)a1 descriptor:(id)a2 topLeft:(struct CGPoint { double x0; double x1; })a3 topRight:(struct CGPoint { double x0; double x1; })a4 bottomRight:(struct CGPoint { double x0; double x1; })a5 bottomLeft:(struct CGPoint { double x0; double x1; })a6;
- (void)setMrcDescriptor:(struct __MRCDescriptor { } *)a0;
- (id)vn_cloneObject;

@end
