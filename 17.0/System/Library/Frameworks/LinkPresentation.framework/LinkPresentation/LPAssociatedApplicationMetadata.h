@class NSString, LPImage;

@interface LPAssociatedApplicationMetadata : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *bundleIdentifier;
@property (retain, nonatomic) LPImage *icon;
@property (copy, nonatomic) NSString *caption;
@property (copy, nonatomic) NSString *action;
@property (nonatomic) long long clipAction;

+ (id)keyPathsForValuesAffecting_dummyPropertyForObservation;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
