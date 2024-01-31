@class TSDWrapSegments, TSDLayout, TSWPColumn, NSMutableArray, TSUPointerKeyDictionary;
@protocol TSWPLayoutTarget;

@interface TPTextWrapCookie : NSObject {
    TSUPointerKeyDictionary *_wrapSegmentsInverseTransformInRootDictionary;
}

@property (retain, nonatomic) TSWPColumn *column;
@property (weak, nonatomic) TSDLayout<TSWPLayoutTarget> *target;
@property (readonly, nonatomic) NSMutableArray *floatingWrappables;
@property (retain, nonatomic) TSDWrapSegments *interiorWrapSegments;
@property (readonly, nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } targetInverseTransformInRoot;

+ (id)textWrapCookieForColumn:(id)a0 targetLayout:(id)a1;

- (void).cxx_destruct;
- (id)initWithColumn:(id)a0 targetLayout:(id)a1;
- (void)addFloatingWrappable:(id)a0;
- (id)transformedWrapSegmentsForWrappable:(id)a0 canvasSpaceToWrapSpaceTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1;

@end
