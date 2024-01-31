@class SCNGeometry;

@interface SCNLevelOfDetail : NSObject <NSCopying, NSSecureCoding> {
    struct __C3DLOD { } *_lod;
    long long _mode;
    SCNGeometry *_geometry;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) SCNGeometry *geometry;
@property (readonly) double screenSpaceRadius;
@property (readonly) double worldSpaceDistance;

+ (id)levelOfDetailWithGeometry:(id)a0 screenSpaceRadius:(double)a1;
+ (id)levelOfDetailWithGeometry:(id)a0 worldSpaceDistance:(double)a1;

- (id)thresholdValue;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)copy;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void *)__CFObject;
- (void)_customEncodingOfSCNLevelOfDetail:(id)a0;
- (void)_didDecodeSCNLevelOfDetail:(id)a0;
- (void)_setupWithGeometry:(id)a0 thresholdMode:(long long)a1 value:(double)a2;
- (id)initWithGeometry:(id)a0 thresholdMode:(long long)a1 lod:(struct __C3DLOD { } *)a2;
- (id)initWithGeometry:(id)a0 thresholdMode:(long long)a1 thresholdValue:(id)a2;
- (long long)thresholdMode;

@end
