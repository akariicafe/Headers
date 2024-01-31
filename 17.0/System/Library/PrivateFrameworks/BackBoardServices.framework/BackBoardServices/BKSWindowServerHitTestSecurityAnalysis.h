@class NSString;

@interface BKSWindowServerHitTestSecurityAnalysis : NSObject <BSDescriptionStreamable, BSProtobufSerializable, NSCopying, NSMutableCopying> {
    struct CATransform3D { double m11; double m12; double m13; double m14; double m21; double m22; double m23; double m24; double m31; double m32; double m33; double m34; double m41; double m42; double m43; double m44; } _cumulativeLayerTransform;
    float _cumulativeOpacity;
    BOOL _hasInsecureFilter;
    BOOL _parentsHaveInsecureLayerProperties;
    unsigned int _occlusionMask;
    float _occlusionPercentage;
    long long _occlusionType;
}

@property (readonly, nonatomic) struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; } cumulativeLayerTransform;
@property (readonly, nonatomic) float cumulativeOpacity;
@property (readonly, nonatomic) BOOL hasInsecureFilter;
@property (readonly, nonatomic) BOOL parentsHaveInsecureLayerProperties;
@property (readonly, nonatomic) unsigned int occlusionMask;
@property (readonly, nonatomic) float occlusionPercentage;
@property (readonly, nonatomic) long long occlusionType;
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

@end
