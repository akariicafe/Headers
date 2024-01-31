@class NSString;

@interface CESymbolIcon : CEIcon

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *path;
@property (copy, nonatomic) NSString *systemColorName;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
