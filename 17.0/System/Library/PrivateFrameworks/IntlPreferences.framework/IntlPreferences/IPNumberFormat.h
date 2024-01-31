@class NSString;

@interface IPNumberFormat : NSObject

@property (readonly, nonatomic) NSString *decimalSeparator;
@property (readonly, nonatomic) NSString *groupingSeparator;
@property (readonly, nonatomic) NSString *formattedNumber;

+ (void)setFormat:(id)a0;
+ (id)availableFormats;
+ (id)currentFormat;

- (unsigned long long)hash;
- (id)initWithLocale:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithDecimalSeparator:(id)a0 groupingSeparator:(id)a1;

@end
