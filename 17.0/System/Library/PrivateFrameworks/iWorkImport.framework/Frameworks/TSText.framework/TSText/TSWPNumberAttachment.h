@class NSString;

@interface TSWPNumberAttachment : TSWPTextualAttachment {
    NSString *_stringValue;
}

@property (copy, nonatomic) NSString *numberFormat;

+ (Class)classForUnarchiver:(id)a0;

- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (id)copyWithContext:(id)a0;
- (id)stringEquivalent;
- (id)stringWithNumber:(unsigned long long)a0;
- (void)saveToArchiver:(id)a0;
- (void)loadFromUnarchiver:(id)a0;
- (void)performTemplateLocalization:(id)a0;
- (void)setStringValue:(id)a0 forPasteboardController:(id)a1;
- (id)stringEquivalentWithNumberProvider:(id)a0;

@end
