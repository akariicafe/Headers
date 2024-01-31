@interface EMSeriesMapper : CMMapper

- (struct CGColor { } *)fillColor;
- (float)strokeWidth;
- (struct CGColor { } *)strokeColor;
- (float)offset;
- (float)markerWidth;
- (id)values;
- (struct CGColor { } *)markerColor;
- (unsigned int)markerType;
- (unsigned int)chartType;
- (BOOL)useSecondaryAxis;

@end
