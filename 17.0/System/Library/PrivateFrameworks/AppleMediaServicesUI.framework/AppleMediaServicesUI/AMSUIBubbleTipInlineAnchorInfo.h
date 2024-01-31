@interface AMSUIBubbleTipInlineAnchorInfo : NSObject

@property (nonatomic) unsigned long long arrowDirection;
@property (nonatomic) double arrowOffset;
@property (nonatomic) double relativeArrowOffset;

- (id)initWithArrowDirection:(unsigned long long)a0 relativeArrowOffset:(double)a1;
- (id)initWithArrowDirection:(unsigned long long)a0 arrowOffset:(double)a1;

@end
