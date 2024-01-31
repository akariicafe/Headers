@class NSString, NSDictionary;

@interface AKAppleIDPasskeySetupContext : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *altDSID;
@property (copy, nonatomic) NSDictionary *appProvidedData;

- (id)initWithAltDSID:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
