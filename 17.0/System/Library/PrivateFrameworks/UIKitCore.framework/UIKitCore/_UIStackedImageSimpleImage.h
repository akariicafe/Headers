@class NSString, UIImage;
@protocol UINamedLayerContentProvider;

@interface _UIStackedImageSimpleImage : NSObject <UINamedLayerImage>

@property (retain, nonatomic) NSString *name;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (nonatomic) double opacity;
@property (nonatomic) int blendMode;
@property (retain, nonatomic) UIImage *imageObj;
@property (nonatomic) BOOL fixedFrame;
@property (readonly, nonatomic) id<UINamedLayerContentProvider> contentProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
