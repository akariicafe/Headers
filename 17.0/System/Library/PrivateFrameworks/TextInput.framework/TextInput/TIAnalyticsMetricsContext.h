@class NSString;

@interface TIAnalyticsMetricsContext : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *inputLanguage;
@property (readonly, nonatomic) NSString *inputRegion;
@property (readonly, nonatomic) NSString *inputLanguageAndRegion;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithInputLanguage:(id)a0 inputRegion:(id)a1;

@end
