@class NSString;

@interface LNLinkEnumerationValueType : LNValueType

@property (readonly, copy, nonatomic) NSString *enumerationIdentifier;

+ (BOOL)supportsSecureCoding;
+ (id)objectClassesForCoding;

- (Class)objectClass;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithEnumerationIdentifier:(id)a0;
- (id)typeIdentifierAsString;

@end
