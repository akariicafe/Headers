@interface _CUIMultisizeImageSetSizeAndIndex : NSObject

@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) unsigned int index;
@property (nonatomic) long long idiom;
@property (nonatomic) unsigned long long subtype;

- (id)description;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 index:(unsigned int)a1 idiom:(long long)a2 subtype:(unsigned long long)a3;

@end
