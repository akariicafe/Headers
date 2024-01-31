@class NSString;

@interface PHCloudIdentifier : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly, nonatomic) PHCloudIdentifier *notFoundIdentifier;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *localCloudIdentifier;
@property (readonly, nonatomic) NSString *identifierCode;
@property (readonly, nonatomic) NSString *fingerPrint;
@property (readonly, nonatomic) NSString *stringValue;

+ (id)_notFoundIdentifier;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithStringValue:(id)a0;
- (id)initAsNotFoundIdentifier;
- (id)initWithLocalCloudIdentifier:(id)a0 identifierCode:(id)a1 fingerPrint:(id)a2;

@end
