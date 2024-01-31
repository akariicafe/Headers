@interface PXStoryAutoEditModule : NSObject

@property (readonly, nonatomic) long long moduleType;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;

- (id)debugDescription;
- (id)initWithModuleType:(long long)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;

@end
