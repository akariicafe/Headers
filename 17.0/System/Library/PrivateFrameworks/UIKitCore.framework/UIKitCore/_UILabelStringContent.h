@class NSString;

@interface _UILabelStringContent : _UILabelContent {
    NSString *_string;
    struct { unsigned char isWidthVariant : 1; } _flags;
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
- (BOOL)isWidthVariant;
- (id)string;
- (void).cxx_destruct;
- (BOOL)isAttributed;
- (BOOL)isNil;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithString:(id)a0 defaultAttributes:(id)a1;
- (BOOL)isEqualToAttributedString:(id)a0;

@end
