@class PXSplitLayoutPerformer, NSArray, PXLayoutPerformerOutput, NSMutableArray, PXLeafLayoutPerformer;

@interface PXCollageLayoutPerformer : PXBaseLayoutPerformer <PXLayoutPerformer>

@property (retain, nonatomic) PXLeafLayoutPerformer *singleItemPerformer;
@property (retain, nonatomic) PXSplitLayoutPerformer *twoItemPerformer;
@property (retain, nonatomic) PXSplitLayoutPerformer *threeItemPerformer;
@property (retain, nonatomic) PXSplitLayoutPerformer *threeItemNestedPerformer;
@property (retain, nonatomic) NSMutableArray *mutableChildren;
@property (nonatomic) double outerLayoutRatio;
@property (nonatomic) double interItemSpacing;
@property (nonatomic) BOOL portraitBias;
@property (nonatomic) long long numberOfVisibleItems;
@property (nonatomic) struct { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; BOOL x1; struct { long long x0; long long x1; long long x2; long long x3; } x2; } layoutInput;
@property (retain, nonatomic) PXLayoutPerformerOutput *layoutOutput;
@property (readonly, nonatomic) NSArray *children;

+ (struct CGSize { double x0; double x1; })performLayoutWithLayoutInput:(struct { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; BOOL x1; struct { long long x0; long long x1; long long x2; long long x3; } x2; })a0 layoutOutput:(id)a1 usingBlock:(id /* block */)a2;

@end
