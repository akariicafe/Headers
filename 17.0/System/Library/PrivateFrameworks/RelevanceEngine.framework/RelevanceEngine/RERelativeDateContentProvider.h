@class NSDate;

@interface RERelativeDateContentProvider : RETextContentProvider

@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) long long style;
@property (readonly, nonatomic) unsigned long long units;

+ (id)relativeDateContentProviderWithDate:(id)a0 style:(long long)a1 units:(unsigned long long)a2;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDate:(id)a0 style:(long long)a1 units:(unsigned long long)a2;
- (id)attributedStringRepresentation;
- (id)clockKitTextProviderRepresentation;

@end
