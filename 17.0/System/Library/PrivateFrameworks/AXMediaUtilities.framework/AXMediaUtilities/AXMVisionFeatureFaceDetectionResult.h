@class AXMVisionFeatureFaceLandmarks, NSUUID, NSString, NSDictionary, AXMVisionFeatureFaceAttributes;

@interface AXMVisionFeatureFaceDetectionResult : NSObject <NSSecureCoding> {
    long long _likelyExpression;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSUUID *uuid;
@property (nonatomic) unsigned long long faceId;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (nonatomic) double rectanglesConfidence;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) double nameConfidence;
@property (retain, nonatomic) AXMVisionFeatureFaceAttributes *attributes;
@property (nonatomic) double attributesConfidence;
@property (retain, nonatomic) NSDictionary *expressionsAndConfidence;
@property (readonly, nonatomic) long long likelyExpression;
@property (retain, nonatomic) AXMVisionFeatureFaceLandmarks *landmarks;
@property (retain, nonatomic) AXMVisionFeatureFaceLandmarks *landmarks3d;
@property (nonatomic) double landmarksConfidence;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } pose;
@property (nonatomic) double poseConfidence;

+ (id)localizedStringFormatterForExpression:(id)a0;
+ (id)nameForFaceExpression:(long long)a0;

- (id)_init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (long long)_expressionForString:(id)a0;
- (double)confidenceForExpression:(long long)a0;
- (id)descriptionForExpression:(long long)a0;

@end
