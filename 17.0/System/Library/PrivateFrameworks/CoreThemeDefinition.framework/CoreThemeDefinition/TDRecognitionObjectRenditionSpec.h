@interface TDRecognitionObjectRenditionSpec : TDSimpleArtworkRenditionSpec

@property (nonatomic) float a11;
@property (nonatomic) float a21;
@property (nonatomic) float a31;
@property (nonatomic) float a41;
@property (nonatomic) float a12;
@property (nonatomic) float a22;
@property (nonatomic) float a32;
@property (nonatomic) float a42;
@property (nonatomic) float a13;
@property (nonatomic) float a23;
@property (nonatomic) float a33;
@property (nonatomic) float a43;
@property (nonatomic) float a14;
@property (nonatomic) float a24;
@property (nonatomic) float a34;
@property (nonatomic) float a44;
@property (nonatomic) int version;
@property struct { void /* unknown type, empty encoding */ x0[4]; } referenceOriginTransform;

+ (id)fetchRequest;

- (id)createCSIRepresentationWithCompression:(BOOL)a0 colorSpaceID:(unsigned long long)a1 document:(id)a2;

@end
