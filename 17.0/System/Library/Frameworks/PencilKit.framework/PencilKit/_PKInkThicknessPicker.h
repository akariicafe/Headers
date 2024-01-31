@class NSArray, PKToolConfiguration;

@interface _PKInkThicknessPicker : UIControl {
    NSArray *_cachedSortedWeights;
    double _weight;
    PKToolConfiguration *_toolConfiguration;
}

@property (retain, nonatomic) NSArray *thicknessButtons;

+ (struct CGSize { double x0; double x1; })sizeWithButtonCount:(unsigned long long)a0 buttonSize:(struct CGSize { double x0; double x1; })a1;

- (void)buttonTapped:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
