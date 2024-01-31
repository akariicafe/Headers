@class NSString;

@interface TUNearbyDeviceHandleCapabilities : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *sourceVersion;
@property (readonly, copy, nonatomic) NSString *modelString;
@property (readonly, nonatomic, getter=isAVLessCapable) BOOL avLessCapable;
@property (readonly, nonatomic, getter=isLagunaCapable) BOOL lagunaCapable;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSourceVersion:(id)a0;
- (id)initWithSourceVersion:(id)a0 modelString:(id)a1;

@end
