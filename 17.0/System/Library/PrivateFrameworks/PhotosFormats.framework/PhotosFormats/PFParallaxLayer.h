@class NSString;

@interface PFParallaxLayer : NSObject

@property (readonly, nonatomic) NSString *fileExtension;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } pixelSize;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (readonly, nonatomic) double zPosition;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL isForeground;
@property (readonly, nonatomic) BOOL isBackground;
@property (readonly, nonatomic) BOOL isBackfill;
@property (readonly, nonatomic) BOOL isInactive;
@property (readonly, nonatomic) BOOL isDebug;
@property (readonly, nonatomic) BOOL isSettlingEffect;

- (id)description;
- (void).cxx_destruct;
- (id)debugDescription;
- (BOOL)saveToURL:(id)a0 error:(id *)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 zPosition:(double)a1 identifier:(id)a2;
- (BOOL)isBackgroundLandscape;
- (BOOL)isForegroundLandscape;
- (id)layerByUpdatingFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)makeUniqueFileNameWithFileNames:(id)a0 orientation:(long long)a1;

@end
