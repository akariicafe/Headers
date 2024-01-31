@class NSArray;

@interface STSAnimatedImageInfo : NSObject

@property (copy, nonatomic) NSArray *frames;
@property (nonatomic) double duration;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } size;

- (void).cxx_destruct;

@end
