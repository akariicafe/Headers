@interface PVNCLCTriplet : NSObject

@property (readonly, nonatomic) int hgColorPrimary;
@property (readonly, nonatomic) int hgTransferFunction;
@property (readonly, nonatomic) int hgYCbCrMatrix;
@property (readonly, nonatomic) struct __CFString { } *colorPrimary;
@property (readonly, nonatomic) struct __CFString { } *transferFunction;
@property (readonly, nonatomic) struct __CFString { } *ycbcrMatrix;

- (BOOL)isInvalid;
- (id)initWithColorPrimaryStr:(struct __CFString { } *)a0 hgColorPrimary:(int)a1 transferFunctionStr:(struct __CFString { } *)a2 hgTransformFunction:(int)a3 ycbcrMatrixStr:(struct __CFString { } *)a4 hgYCbCrMatrix:(int)a5;

@end
