@class NSString, NSDictionary;

@interface ILClassificationReportRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *extensionIdentifier;
@property (copy, nonatomic) NSDictionary *jsonDictionary;

- (BOOL)isEqualToRequest:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithExtensionIdentifier:(id)a0 jsonDictionary:(id)a1;

@end
