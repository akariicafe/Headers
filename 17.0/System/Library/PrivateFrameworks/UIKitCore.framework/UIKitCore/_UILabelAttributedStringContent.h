@class NSAttributedString;

@interface _UILabelAttributedStringContent : _UILabelContent {
    NSAttributedString *_attributedString;
}

- (id)contentWithString:(id)a0;
- (unsigned long long)hash;
- (BOOL)_isContentEqualToContent:(id)a0;
- (long long)length;
- (id)attributedString;
- (id)contentWithAttributedString:(id)a0;
- (id)contentByApplyingAttribute:(id)a0 value:(id)a1 toRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (id)attributedStringContent;
- (BOOL)isEqualToString:(id)a0;
- (id)initWithAttributedString:(id)a0 defaultAttributes:(id)a1;
- (BOOL)isWidthVariant;
- (id)string;
- (BOOL)isEqualToContent:(id)a0 byAttribute:(id)a1;
- (void).cxx_destruct;
- (BOOL)isAttributed;
- (id)defaultValueForAttribute:(id)a0;
- (BOOL)isNil;
- (BOOL)isAttribute:(id)a0 uniformlyEqualToValue:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToAttributedString:(id)a0;

@end
