@class NSArray, SUUILabelViewElement;

@interface SUUIStackItemViewElement : SUUIItemViewElement

@property (readonly, nonatomic) NSArray *imageElements;
@property (readonly, nonatomic) SUUILabelViewElement *textElement;

- (long long)pageComponentType;

@end
