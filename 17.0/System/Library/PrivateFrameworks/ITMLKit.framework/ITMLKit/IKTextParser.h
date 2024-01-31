@class NSString, NSAttributedString;

@interface IKTextParser : NSObject <NSCopying>

@property (readonly, retain, nonatomic) NSString *string;
@property (readonly, retain, nonatomic) NSAttributedString *attributedString;

+ (id)textWithDOMElement:(id)a0 usingParseBlock:(id /* block */)a1;
+ (id)textWithAttributedString:(id)a0;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)attributedStringWithFont:(id)a0 foregroundColor:(id)a1 textAlignment:(long long)a2 style:(id)a3;
- (id)attributedStringWithFont:(id)a0 style:(id)a1;
- (id)_attributedStringFromDomElement:(id)a0 usingParseBlock:(id /* block */)a1;
- (id)_attributedStringWithDefaultAttributes:(id)a0 fontHandler:(id /* block */)a1 style:(id)a2;
- (id)_attributesWithFont:(id)a0 style:(id)a1;
- (id)_attributesWithFont:(id)a0 style:(id)a1 foregroundColor:(id)a2 textAlignment:(long long)a3;
- (id)_stringFromDateElement:(id)a0 unformattedString:(id)a1;
- (id)_stringFromDurationElement:(id)a0 unformattedString:(id)a1;
- (id)_stringFromNumberElement:(id)a0 unformattedString:(id)a1;
- (id)attributedStringWithFontHandler:(id /* block */)a0 style:(id)a1;
- (id)attributedStringWithFontHandler:(id /* block */)a0 style:(id)a1 defaultAttributes:(id *)a2;
- (id)attributedStringWithFontHandler:(id /* block */)a0 style:(id)a1 foregroundColor:(id)a2 textAlignment:(long long)a3;
- (id)attributedStringWithFontHandler:(id /* block */)a0 style:(id)a1 foregroundColor:(id)a2 textAlignment:(long long)a3 defaultAttributes:(id *)a4;

@end
