@class NSArray, NSDate;

@interface GEOComposedStringCondition : NSObject <NSCopying, NSSecureCoding> {
    NSDate *_expirationDate;
    NSArray *_subConditions;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) int conditionType;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isValid;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithGeoCondition:(id)a0;

@end
