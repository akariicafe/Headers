@class NSDictionary;

@interface TPSWidgetContent : TPSContent

@property (copy, nonatomic) NSDictionary *attributes;
@property (nonatomic) long long priority;
@property (nonatomic) BOOL hasAssets;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (long long)compare:(id)a0;
- (void).cxx_destruct;
- (id)titleContent;
- (id)debugDescription;
- (id)initWithDictionary:(id)a0 metadata:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
