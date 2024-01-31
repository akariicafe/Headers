@interface PXTextContainer : NSTextContainer

@property (readonly, nonatomic) long long preferredOrientation;

- (id)initWithSize:(struct CGSize { double x0; double x1; })a0;
- (long long)layoutOrientation;
- (id)initWithCoder:(id)a0;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 layoutOrientation:(long long)a1;

@end
