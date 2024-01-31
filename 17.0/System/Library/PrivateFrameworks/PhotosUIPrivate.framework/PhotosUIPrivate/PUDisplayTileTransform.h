@class PUModelTileTransform, NSString;

@interface PUDisplayTileTransform : NSObject <NSCopying>

@property (readonly, nonatomic) PUModelTileTransform *modelTileTransform;
@property (nonatomic, setter=_setHasUserInput:) BOOL hasUserInput;
@property (nonatomic, setter=_setAffineTransform:) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } affineTransform;
@property (copy, nonatomic, setter=_setUserInputOriginIdentifier:) NSString *userInputOriginIdentifier;
@property (nonatomic, setter=_setTransformPadding:) struct CGSize { double width; double height; } transformPadding;
@property (nonatomic, setter=_setInitialScale:) double _initialScale;
@property (nonatomic, setter=_setInitialSize:) struct CGSize { double width; double height; } _initialSize;
@property (nonatomic, setter=_setDisplaySize:) struct CGSize { double width; double height; } _displaySize;
@property (nonatomic, setter=_setZoomedOut:) BOOL isZoomedOut;

+ (id)displayTileTransformWithModelTileTransform:(id)a0 initialScale:(double)a1 initialSize:(struct CGSize { double x0; double x1; })a2 displaySize:(struct CGSize { double x0; double x1; })a3 secondaryDisplayTileTransform:(id)a4;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)newDisplayTileTransformWithUserAffineTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0 userInputOriginIdentifier:(id)a1 isZoomedOut:(BOOL)a2;

@end
