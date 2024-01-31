@interface OADLineEnd : OADProperties <NSCopying> {
    unsigned char mType;
    unsigned char mWidth;
    unsigned char mLength;
    unsigned char mIsTypeOverridden : 1;
    unsigned char mIsWidthOverridden : 1;
    unsigned char mIsLengthOverridden : 1;
}

+ (id)defaultProperties;
+ (id)stringForLineEndLength:(unsigned char)a0;
+ (id)stringForLineEndType:(unsigned char)a0;
+ (id)stringForLineEndWidth:(unsigned char)a0;

- (void)setType:(unsigned char)a0;
- (void)setWidth:(unsigned char)a0;
- (void)setLength:(unsigned char)a0;
- (unsigned long long)hash;
- (unsigned char)length;
- (id)description;
- (unsigned char)width;
- (BOOL)isEqual:(id)a0;
- (id)initWithDefaults;
- (unsigned char)type;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)a0;
- (id)initWithType:(unsigned char)a0 width:(unsigned char)a1 length:(unsigned char)a2;
- (BOOL)isAnythingOverridden;
- (BOOL)isLengthOverridden;
- (BOOL)isTypeOverridden;
- (BOOL)isWidthOverridden;
- (void)removeUnnecessaryOverrides;

@end
