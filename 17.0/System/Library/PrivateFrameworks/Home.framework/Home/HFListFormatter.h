@class NSLocale;

@interface HFListFormatter : NSFormatter

@property (nonatomic) struct UListFormatter { } *formatter;
@property (nonatomic) unsigned long long listStyle;
@property (copy, nonatomic) NSLocale *locale;

- (void)dealloc;
- (id)stringForObjectValue:(id)a0;
- (void).cxx_destruct;
- (id)_formatAndListWithElements:(id)a0;
- (id)_formatOrListWithElements:(id)a0;
- (id)_formatSentenceListWithElements:(id)a0;
- (void)_invaildateFormatter;

@end
