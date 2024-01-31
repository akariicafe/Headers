@class UIImage, NSArray, NSString;
@protocol UINamedLayerStack;

@interface VUINamedLayerStack : NSObject <UINamedLayerStack>

@property (retain, nonatomic) id<UINamedLayerStack> layerStack;
@property (retain, nonatomic) UIImage *cornerRadiusFlatImage;
@property (retain, nonatomic) UIImage *originalImage;
@property (copy, nonatomic) NSArray *replacementLayers;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSArray *layers;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } size;
@property (readonly, nonatomic) double scale;
@property (readonly, nonatomic) struct CGImage { } *flattenedImage;
@property (readonly, nonatomic) id radiosityImage;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } radiosityImageScale;
@property (readonly, nonatomic) BOOL flatImageContainsCornerRadius;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)decodedNamedLayerStackWithImage:(id)a0 size:(struct CGSize { double x0; double x1; })a1 cornerRadius:(double)a2;
+ (id)namedLayerStackWithImage:(id)a0;

- (id)init;
- (id)_init;
- (void).cxx_destruct;

@end
