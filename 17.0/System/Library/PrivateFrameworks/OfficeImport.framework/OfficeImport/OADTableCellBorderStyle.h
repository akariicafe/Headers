@class OADStroke;

@interface OADTableCellBorderStyle : NSObject {
    OADStroke *mLeftStroke;
    OADStroke *mRightStroke;
    OADStroke *mTopStroke;
    OADStroke *mBottomStroke;
    OADStroke *mHorzInsideStroke;
    OADStroke *mVertInsideStroke;
    OADStroke *mTopLeftToBottomRightStroke;
    OADStroke *mBottomLeftToTopRightStroke;
}

+ (id)defaultStyle;
+ (id)defaultAxisParallelStroke;
+ (id)defaultObliqueStroke;

- (id)description;
- (void).cxx_destruct;
- (id)shallowCopy;
- (id)stroke:(int)a0;
- (void)setRightStroke:(id)a0;
- (void)applyOverridesFrom:(id)a0;
- (id)bottomLeftToTopRightStroke;
- (id)bottomStroke;
- (id)horzInsideStroke;
- (id)leftStroke;
- (id)rightStroke;
- (void)setBottomLeftToTopRightStroke:(id)a0;
- (void)setBottomStroke:(id)a0;
- (void)setHorzInsideStroke:(id)a0;
- (void)setLeftStroke:(id)a0;
- (void)setStrokeOfType:(int)a0 toValue:(id)a1;
- (void)setTopLeftToBottomRightStroke:(id)a0;
- (void)setTopStroke:(id)a0;
- (void)setVertInsideStroke:(id)a0;
- (id)topLeftToBottomRightStroke;
- (id)topStroke;
- (id)vertInsideStroke;

@end
