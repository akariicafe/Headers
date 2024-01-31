@class WAAQIGradient, NSMutableArray;

@interface WAAQIScale : NSObject

@property (copy, nonatomic) NSMutableArray *categories;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (readonly, nonatomic) WAAQIGradient *gradient;

+ (id)scaleFromFoundationScale:(id)a0;

- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void).cxx_destruct;
- (void)addCategory:(id)a0;

@end
