@class UIColor, NSArray, IKTextParser, NSAttributedString, NSMutableArray;

@interface IKTextElement : IKViewElement {
    IKTextParser *_textParser;
    NSMutableArray *_textBadges;
    NSMutableArray *_textBadgeElements;
    NSMutableArray *_textSpanElements;
}

@property (readonly, retain, nonatomic) NSAttributedString *text;
@property (readonly, nonatomic) NSArray *badges;
@property (readonly, nonatomic) unsigned long long textStyle;
@property (readonly, nonatomic) long long maxLines;
@property (readonly, nonatomic) unsigned long long alignment;
@property (readonly, nonatomic) UIColor *color;

+ (BOOL)shouldParseChildDOMElements;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)accessibilityText;
- (id)initWithDOMElement:(id)a0 parent:(id)a1 elementFactory:(id)a2;
- (unsigned long long)_styleForTagName:(id)a0;
- (void)appDocumentDidMarkStylesDirty;
- (id)attributedStringWithFont:(id)a0;
- (id)attributedStringWithFont:(id)a0 foregroundColor:(id)a1 textAlignment:(long long)a2;
- (id)attributedStringWithFontHandler:(id /* block */)a0;
- (id)attributedStringWithFontHandler:(id /* block */)a0 defaultAttributes:(id *)a1;
- (id)attributedStringWithFontHandler:(id /* block */)a0 foregroundColor:(id)a1 textAlignment:(long long)a2;
- (id)attributedStringWithFontHandler:(id /* block */)a0 foregroundColor:(id)a1 textAlignment:(long long)a2 defaultAttributes:(id *)a3;
- (id)initWithOriginalElement:(id)a0;
- (id)initWithPrototypeElement:(id)a0 parent:(id)a1 appDataItem:(id)a2;

@end
