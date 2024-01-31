@interface TYTextDirectionAnnotation : NSObject

@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (nonatomic) unsigned long long textDirection;

+ (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 textDirection:(unsigned long long)a1;

- (id)description;

@end
