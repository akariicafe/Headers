@interface TTRNLTextStructuredEventLocation : NSObject

@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (nonatomic) long long locationType;
@property (nonatomic) long long proximity;

- (id)description;
- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 locationType:(long long)a1 proximity:(long long)a2;

@end
