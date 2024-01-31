@class NSString, NSLocale;

@interface TSWPTranscriber : NSObject {
    NSString *_displayName;
    NSString *_identifier;
    NSString *_transformIdentifier;
}

@property (readonly) NSLocale *romanizationLocale;

+ (id)transcriberWithIdentifier:(id)a0 displayName:(id)a1 romanizationLocaleID:(id)a2 transformIdentifier:(id)a3;

- (void).cxx_destruct;
- (id)transcribeText:(id)a0;
- (id)initWithIdentifier:(id)a0 displayName:(id)a1 romanizationLocaleID:(id)a2 transformIdentifier:(id)a3;
- (id)transcribeText:(id)a0 withLocale:(id)a1;
- (void)transcribeWordsInText:(id)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 locale:(id)a2 block:(id /* block */)a3;

@end
