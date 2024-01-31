@interface MMHTMLParser : NSObject

- (BOOL)_parseAttributeValueWithScanner:(id)a0;
- (void)_parseAttributesWithScanner:(id)a0;
- (BOOL)_parseEndTag:(id)a0 withScanner:(id)a1;
- (id)_parseLenientBlockTagWithScanner:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_parseNameWithScanner:(id)a0;
- (id)_parseStrictBlockTagWithScanner:(id)a0;
- (BOOL)_parseStringWithScanner:(id)a0;
- (id)parseBlockTagWithScanner:(id)a0;
- (id)parseCommentWithScanner:(id)a0;
- (id)parseInlineTagWithScanner:(id)a0;

@end
