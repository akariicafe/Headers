@interface WKFoundTextPosition : UITextPosition

@property (nonatomic) unsigned long long offset;
@property (nonatomic) unsigned long long order;

+ (id)textPositionWithOffset:(unsigned long long)a0 order:(unsigned long long)a1;

@end
