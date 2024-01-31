@class NSArray;

@interface TSDBrushStrokeLayoutOptions : NSObject

@property (copy, nonatomic) NSArray *patternOffsetsBySubpath;
@property (copy, nonatomic) NSArray *transparencyLayersBySubpath;
@property (nonatomic) double strokeEnd;

- (id)init;
- (void).cxx_destruct;

@end
