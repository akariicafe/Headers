@interface LAPSPasscodeType : NSObject <NSCopying>

@property (nonatomic) long long identifier;
@property (readonly, nonatomic) unsigned long long length;

+ (id)alphanumericType;
+ (id)noneType;
+ (id)numericCustomDigitsType;
+ (id)numericFourDigitsType;
+ (id)numericSixDigitsType;
+ (id)typeAllowingString:(id)a0;

- (unsigned long long)hash;
- (id)description;
- (id)localizedName;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)allowsLength:(long long)a0;
- (BOOL)allowsString:(id)a0;
- (long long)complexityRating;
- (BOOL)hasFixedLength;
- (id)initWithIdentifier:(long long)a0 length:(unsigned long long)a1;

@end
