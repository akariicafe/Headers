@interface CTDataStatusBasic : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL attached;
@property (nonatomic) BOOL hasIndicator;
@property (nonatomic) BOOL inHomeCountry;
@property (nonatomic) BOOL roamAllowed;
@property (nonatomic) BOOL cellularDataPossible;
@property (nonatomic) BOOL newRadioCoverage;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
