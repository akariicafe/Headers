@interface ICSystemPaperImageGenerator : NSObject

@property (nonatomic, getter=isSixChannelBlendingEnabled) BOOL sixChannelBlendingEnabled;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } paperContentBounds;
@property (readonly, nonatomic) BOOL hasDeepLink;

+ (id)imageGeneratorWithPaperAttachment:(id)a0;
+ (id)imageGeneratorWithPaperAttachment:(id)a0 useActivePaper:(BOOL)a1;

- (id)init;
- (BOOL)drawPaperInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)imageWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 completion:(id /* block */)a1;
- (id)imageWithFullResolution:(BOOL)a0 inverted:(BOOL)a1;
- (id)initWithPaperAttachment:(id)a0;
- (id)initWithPaperAttachment:(id)a0 useActivePaper:(BOOL)a1;
- (BOOL)validatePaperBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
