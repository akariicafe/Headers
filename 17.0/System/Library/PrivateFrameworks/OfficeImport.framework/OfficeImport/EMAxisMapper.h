@interface EMAxisMapper : CMMapper

- (float)strokeWidth;
- (id)position;
- (struct CGColor { } *)strokeColor;
- (struct CGColor { } *)textColor;
- (id)label;
- (id)labels;
- (float)minValue;
- (float)unit;
- (id)values;
- (unsigned int)type;
- (float)maxValue;
- (BOOL)isLogarithmic;
- (BOOL)centerLabels;

@end
