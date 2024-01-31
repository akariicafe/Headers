@class NSString, NSDictionary, NSDate;

@interface WFNextHourPrecipitationDescription : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *token;
@property (copy, nonatomic) NSString *shortTemplate;
@property (copy, nonatomic) NSString *longTemplate;
@property (copy, nonatomic) NSDictionary *parameters;
@property (readonly, nonatomic) NSString *shortDescription;
@property (readonly, nonatomic) NSString *longDescription;
@property (readonly, copy, nonatomic) NSDate *validUntil;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isValidAtDate:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithToken:(id)a0 shortTemplate:(id)a1 longTemplate:(id)a2 parameters:(id)a3 validUntil:(id)a4;
- (id)fillTemplate:(id)a0 withDate:(id)a1;
- (id)initWithShortTemplate:(id)a0 longTemplate:(id)a1 parameters:(id)a2 validUntil:(id)a3;

@end
