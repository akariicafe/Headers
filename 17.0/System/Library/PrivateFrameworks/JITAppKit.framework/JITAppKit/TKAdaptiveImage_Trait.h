@class NSURL;

@interface TKAdaptiveImage_Trait : NSObject

@property (nonatomic) long long horizontalSizeClass;
@property (nonatomic) long long verticalSizeClass;
@property (nonatomic) BOOL useReadableWidth;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) struct CGSize { double width; double height; } relativeSize;
@property (nonatomic) struct CGSize { double width; double height; } minSize;
@property (nonatomic) struct CGSize { double width; double height; } maxSize;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } crop;
@property (copy, nonatomic) NSURL *url;
@property (nonatomic) double quality;

- (id)init;
- (void).cxx_destruct;
- (BOOL)compatibleWithTrait:(id)a0;

@end
