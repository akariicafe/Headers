@interface TLKFormattedTextItem : TLKObject

@property (nonatomic) BOOL isBold;
@property (nonatomic) BOOL isEmphasized;
@property (nonatomic) long long color;

- (BOOL)hasContent;
- (unsigned long long)_itemType;

@end
