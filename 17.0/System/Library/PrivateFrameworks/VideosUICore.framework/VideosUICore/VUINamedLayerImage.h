@class UIImage, NSString, NSObject;
@protocol UINamedLayerImage, UINamedLayerContentProvider;

@interface VUINamedLayerImage : NSObject <UINamedLayerImage>

@property (retain, nonatomic) NSObject<UINamedLayerImage> *namedLayerImage;
@property (nonatomic) int blendMode;
@property (retain, nonatomic) UIImage *decodedImage;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (readonly, nonatomic) double opacity;
@property (nonatomic) BOOL fixedFrame;
@property (readonly, nonatomic) id<UINamedLayerContentProvider> contentProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)decodedNamedLayerImageFromNamedLayerImage:(id)a0;
+ (id)namedLayerImageFromNamedLayerImage:(id)a0;

- (id)init;
- (id)_init;
- (void).cxx_destruct;
- (id)imageObj;

@end
