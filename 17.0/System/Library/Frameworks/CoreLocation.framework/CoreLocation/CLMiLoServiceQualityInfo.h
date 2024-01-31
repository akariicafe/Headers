@class NSArray;

@interface CLMiLoServiceQualityInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long serviceQuality;
@property (readonly, nonatomic) NSArray *serviceQualityReasons;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithQuality:(unsigned long long)a0 andReasons:(id)a1;

@end
