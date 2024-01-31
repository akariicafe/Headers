@class UIImage, NSString;
@protocol UINamedLayerContentProvider;

@interface _UIStackedImageSingleNamedLayerImage : NSObject <UINamedLayerImage>

@property (retain, nonatomic) UIImage *imageObj;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (readonly, nonatomic) double opacity;
@property (readonly, nonatomic) int blendMode;
@property (nonatomic) BOOL fixedFrame;
@property (readonly, nonatomic) id<UINamedLayerContentProvider> contentProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
