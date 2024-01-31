@class UIColor;

@interface ICTintedLayer : CALayer

@property (retain, nonatomic) id originalContents;
@property (retain, nonatomic) UIColor *tintColor;

- (void)setContents:(id)a0;
- (void).cxx_destruct;
- (void)updateContents;

@end
