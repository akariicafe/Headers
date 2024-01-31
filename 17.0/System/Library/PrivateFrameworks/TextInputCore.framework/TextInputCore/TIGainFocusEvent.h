@class NSArray, NSString, NSLocale;

@interface TIGainFocusEvent : TIContextChangeEvent {
    NSLocale *_locale;
    NSString *_originalDocumentText;
    NSArray *_originalWords;
    NSArray *_originalWordEntries;
}

@property (readonly, nonatomic) NSArray *originalWordEntries;

- (id)originalWords;
- (id)originalDocumentText;
- (void).cxx_destruct;
- (id)initWithTIKeyboardState:(id)a0 andLocale:(id)a1;

@end
