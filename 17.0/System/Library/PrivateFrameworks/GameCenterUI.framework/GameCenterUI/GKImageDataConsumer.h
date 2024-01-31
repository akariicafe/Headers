@class NSString;

@interface GKImageDataConsumer : NSObject <GKResourceDataConsumer>

@property (readonly, nonatomic) struct CGSize { double width; double height; } size;
@property (readonly, nonatomic) double scale;
@property (readonly, nonatomic) BOOL isLayeredImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)objectForData:(id)a0 error:(id *)a1;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 isLayeredImage:(BOOL)a2;

@end
