@interface SKUIViewElementHorizontalLayout : NSObject

@property (nonatomic) double elementSpacing;
@property (nonatomic) double layoutWidth;
@property (nonatomic) long long maximumElementsPerLine;
@property (nonatomic) long long maximumLines;

- (id)layoutViewElements:(id)a0 usingSizingBlock:(id /* block */)a1;

@end
