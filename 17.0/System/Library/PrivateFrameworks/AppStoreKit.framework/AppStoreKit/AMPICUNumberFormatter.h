@class NSString, NSLocale;

@interface AMPICUNumberFormatter : NSObject

@property (nonatomic) void **_icuNumberFormatter;
@property (copy, nonatomic) NSString *_localeIdentifierBeingUsed;
@property (copy, nonatomic) NSString *_currencyCodeBeingUsed;
@property (nonatomic) BOOL usesGroupingSeparator;
@property (nonatomic) unsigned long long extendedStyle;
@property (retain, nonatomic) NSLocale *locale;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)stringFromNumber:(id)a0;
- (BOOL)_localeHasChanged;
- (id)initWithExtendedStyle:(unsigned long long)a0 locale:(id)a1;

@end
