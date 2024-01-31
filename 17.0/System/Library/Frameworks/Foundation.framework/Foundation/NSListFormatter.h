@class NSFormatter, NSLocale;

@interface NSListFormatter : NSFormatter {
    struct __CFListFormatter { } *_listFormatter;
}

@property (copy) NSLocale *locale;
@property (copy) NSFormatter *itemFormatter;

+ (id)localizedStringByJoiningStrings:(id)a0;

- (id)init;
- (void)dealloc;
- (id)initWithLocale:(id)a0;
- (id)stringForObjectValue:(id)a0;
- (struct __CFListFormatter { } *)_listFormatter;
- (id)_stringFromStringArray:(id)a0;
- (id)stringFromItems:(id)a0;

@end
