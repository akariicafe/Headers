@class TSUColor;

@interface TSDPathStroker : NSObject {
    TSUColor *mColor;
    TSDPathStroker *mPrecedingStroker;
}

@property (nonatomic) double width;

- (void)dealloc;
- (id)initWithProperties:(id)a0 bundle:(id)a1 dataManager:(void *)a2 precedingStroker:(id)a3;
- (void)strokePath:(struct CGPath { } *)a0 inContext:(struct CGContext { } *)a1 inColor:(id)a2;

@end
