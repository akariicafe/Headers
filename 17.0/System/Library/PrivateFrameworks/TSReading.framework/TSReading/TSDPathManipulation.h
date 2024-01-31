@interface TSDPathManipulation : NSObject {
    TSDPathManipulation *mPrecedingManipulation;
}

- (void)dealloc;
- (BOOL)canDecomposeRectIntoParts;
- (id)initWithProperties:(id)a0 bundle:(id)a1 dataManager:(void *)a2 precedingManipulation:(id)a3;
- (struct CGPath { } *)manipulatePath:(struct CGPath { } *)a0 withLineWidth:(double)a1;

@end
