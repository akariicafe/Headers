@class NSString;
@protocol GCSJSONObject;

@interface GCSMouseProfile : NSObject <NSSecureCoding, NSCopying, GCSJSONSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) double trackingSpeed;
@property (readonly, nonatomic) BOOL useLinearTracking;
@property (readonly, nonatomic) id<GCSJSONObject> jsonObject;

+ (id)defaultIdentifier;
+ (id)newDefaultProfile;

- (id)initWithJSONObject:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithBundleIdentifier:(id)a0 trackingSpeed:(double)a1 useLinearTracking:(BOOL)a2;
- (void)setTrackingSpeed:(double)a0;

@end
