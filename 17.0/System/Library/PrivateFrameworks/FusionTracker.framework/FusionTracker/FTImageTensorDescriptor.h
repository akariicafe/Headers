@class NSString;

@interface FTImageTensorDescriptor : NSObject

@property (retain, nonatomic) NSString *name;
@property (nonatomic) unsigned int pixelFormat;
@property (nonatomic) struct CGSize { double width; double height; } size;

+ (id)bgraImageWithName:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
+ (id)bgraSquareImageWithName:(id)a0 size:(double)a1;
+ (id)descriptorWithName:(id)a0 size:(struct CGSize { double x0; double x1; })a1 pixelFormat:(unsigned int)a2;

- (void).cxx_destruct;

@end
