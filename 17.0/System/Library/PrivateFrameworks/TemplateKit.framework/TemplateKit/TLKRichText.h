@class NSArray;

@interface TLKRichText : TLKMultilineText

@property (retain, nonatomic) NSArray *formattedTextItems;
@property (readonly) BOOL hasContent;
@property (readonly) BOOL hasOnlyImage;

- (unsigned long long)maxLines;
- (id)icons;
- (id)stars;
- (id)description;
- (id)filterItemsByType:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)text;
- (id)inlineRoundedText;

@end
