@interface PBTextBlock : NSObject

+ (void)readFromTextBlock:(id)a0 toStyledText:(struct __CFAttributedString { } *)a1;
+ (void)applyTextRuler:(void *)a0 toTextBlock:(id)a1;
+ (void)readClientTextBox:(id)a0 textBody:(id)a1 state:(id)a2;
+ (void)readFromStyledText:(struct __CFAttributedString { } *)a0 toStyledPargraphs:(struct __CFArray { } *)a1;
+ (void)readParagraph:(id)a0 paragraph:(struct __CFAttributedString { } *)a1 textType:(int)a2 state:(id)a3;

@end
