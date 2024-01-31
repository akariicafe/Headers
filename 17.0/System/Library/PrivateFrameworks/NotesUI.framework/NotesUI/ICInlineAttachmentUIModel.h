@class UIColor, ICInlineAttachment;

@interface ICInlineAttachmentUIModel : NSObject

@property (readonly, weak, nonatomic) ICInlineAttachment *attachment;
@property (readonly, nonatomic) UIColor *labelColor;
@property (readonly, nonatomic) long long textFindingOffset;
@property (readonly, nonatomic) BOOL fadesColorDuringHighlight;
@property (nonatomic, getter=isSelected) BOOL selected;

+ (id)attributesForInlineAttachmentUIModel;
+ (id)filteredStyleAttributes:(id)a0;

- (void).cxx_destruct;
- (id)initWithAttachment:(id)a0;
- (id)attributedStringWithSurroundingAttributes:(id)a0 formatter:(id /* block */)a1;
- (id)highlightingAttributedString:(id)a0 withRegexMatches:(id)a1;
- (id)highlightingAttributedString:(id)a0 withSurroundingAttributes:(id)a1;

@end
