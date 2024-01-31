@class NSArray, NSString;

@interface BKSHIDEventHitTestLayerInformation : NSObject <BSDescriptionStreamable, BSProtobufSerializable, NSCopying, NSMutableCopying> {
    unsigned long long _validMask;
    float _cumulativeOpacity;
    float _backgroundAverage;
    float _backgroundStandardDeviation;
    float _backgroundAverageContrastThreshold;
    struct CATransform3D { double m11; double m12; double m13; double m14; double m21; double m22; double m23; double m24; double m31; double m32; double m33; double m34; double m41; double m42; double m43; double m44; } _cumulativeLayerTransform;
    struct CATransform3D { double m11; double m12; double m13; double m14; double m21; double m22; double m23; double m24; double m31; double m32; double m33; double m34; double m41; double m42; double m43; double m44; } _cumulativeContentsTransform;
    BOOL _hasInsecureFilter;
    BOOL _detectedOcclusion;
}

@property (readonly, nonatomic) unsigned long long validMask;
@property (readonly, nonatomic) struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; } cumulativeLayerTransform;
@property (readonly, nonatomic) struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; } cumulativeContentsTransform;
@property (readonly, nonatomic) float cumulativeOpacity;
@property (readonly, nonatomic) float backgroundAverage;
@property (readonly, nonatomic) float backgroundStandardDeviation;
@property (readonly, nonatomic) float backgroundAverageContrastThreshold;
@property (readonly, nonatomic) BOOL hasInsecureFilter;
@property (readonly, nonatomic) BOOL detectedOcclusion;
@property (readonly, copy, nonatomic) NSArray *minimumBackgroundColor;
@property (readonly, copy, nonatomic) NSArray *maximumBackgroundColor;
@property (readonly, nonatomic) struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; } cumulativeTransform;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)protobufSchema;
+ (id)new;
+ (id)build:(id /* block */)a0;

- (id)init;
- (id)initForProtobufDecoding;
- (void)appendDescriptionToFormatter:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_updateCCHmacContext:(struct { unsigned int x0[96]; } *)a0;

@end
