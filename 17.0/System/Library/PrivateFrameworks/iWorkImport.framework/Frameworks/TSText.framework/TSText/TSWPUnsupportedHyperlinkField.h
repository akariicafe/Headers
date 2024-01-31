@class NSString;

@interface TSWPUnsupportedHyperlinkField : TSWPPlaceholderSmartField {
    NSString *_href;
    NSString *_hrefOriginal;
}

@property (copy, nonatomic) NSString *href;
@property (copy, nonatomic) NSString *hrefOriginal;

+ (Class)classForUnarchiver:(id)a0;

- (void).cxx_destruct;
- (id)copyWithContext:(id)a0;
- (BOOL)allowsPasteAsSmartField;
- (void)saveToArchiver:(id)a0;
- (void)loadFromUnarchiver:(id)a0;
- (id)initFromSmartField:(id)a0 href:(id)a1 hrefOriginal:(id)a2;
- (unsigned short)smartFieldKind;

@end
