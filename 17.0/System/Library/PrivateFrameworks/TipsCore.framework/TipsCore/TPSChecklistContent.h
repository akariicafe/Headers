@class NSString;

@interface TPSChecklistContent : TPSContent

@property (copy, nonatomic) NSString *subtitle;

+ (BOOL)supportsSecureCoding;
+ (id)na_identity;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)initWithDictionary:(id)a0 metadata:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
