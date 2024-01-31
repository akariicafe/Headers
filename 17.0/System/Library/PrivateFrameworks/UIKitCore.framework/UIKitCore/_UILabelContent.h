@class NSDictionary;

@interface _UILabelContent : NSObject <NSCopying> {
    NSDictionary *_defaultAttributes;
}

- (id)contentWithString:(id)a0;
- (unsigned long long)hash;
- (id)contentByCompletingDefaultAttributesWithAttributes:(id)a0;
- (id)contentByAddingAttributesToDefaultAttributes:(id)a0;
- (id)contentByAddingAttribute:(id)a0 toDefaultAttributesWithValue:(id)a1;
- (BOOL)_isContentEqualToContent:(id)a0;
- (long long)length;
- (id)backgroundColor;
- (id)textColor;
- (id)attributedString;
- (id)contentWithAttributedString:(id)a0;
- (long long)differenceVersusContent:(id)a0;
- (id)contentByApplyingAttribute:(id)a0 value:(id)a1 toRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (id)attributedStringContent;
- (id)contentByApplyingAttributeToEntireRange:(id)a0 value:(id)a1;
- (id)font;
- (BOOL)isEqualToString:(id)a0;
- (id)initWithDefaultAttributes:(id)a0;
- (id)shadow;
- (BOOL)isWidthVariant;
- (id)contentWithDefaultAttributes:(id)a0;
- (id)string;
- (id)description;
- (BOOL)isEqualToContent:(id)a0 byAttribute:(id)a1;
- (id)defaultAttributes;
- (void).cxx_destruct;
- (BOOL)isAttributed;
- (id)widthVariantContentForView:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)defaultValueForAttribute:(id)a0;
- (BOOL)isNil;
- (id)paragraphStyle;
- (BOOL)isAttribute:(id)a0 uniformlyEqualToValue:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToAttributedString:(id)a0;

@end
