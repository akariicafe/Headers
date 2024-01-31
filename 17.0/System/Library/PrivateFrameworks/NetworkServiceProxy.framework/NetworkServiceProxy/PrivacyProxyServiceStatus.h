@class NSArray, NSDictionary;

@interface PrivacyProxyServiceStatus : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property unsigned long long serviceStatus;
@property (retain) NSArray *networkStatuses;
@property (retain) NSDictionary *details;

+ (id)serviceStatusString:(unsigned long long)a0;

- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (id)serialize;
- (void)encodeWithCoder:(id)a0;
- (id)initWithData:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
