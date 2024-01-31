@class NSArray;

@interface CHTextLineStrokeGroup : CHStrokeGroup {
    NSArray *_writingDirectionSortedSubstrokes;
    struct CGVector { double dx; double dy; } _averageWritingOrientation;
    struct CGVector { double dx; double dy; } _averageStrokeDeviation;
    struct vector<CGVector, std::allocator<CGVector>> { struct CGVector *__begin_; struct CGVector *__end_; struct __compressed_pair<CGVector *, std::allocator<CGVector>> { struct CGVector *__value_; } __end_cap_; } _localStrokeWritingOrientations;
    long long _lastSubstrokeIndexBeforeMerge;
    NSArray *_coalescedLastSubstrokes;
}

@property (readonly, nonatomic) NSArray *writingDirectionSortedStrokeIdentifiers;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (struct CGVector { double x0; double x1; })averageStrokeDeviation;
- (struct CGVector { double x0; double x1; })averageWritingOrientation;
- (id)coalescedLastSubstrokes;
- (id)groupByAddingStrokeIdentifiers:(id)a0 removingStrokeIdentifiers:(id)a1 firstStrokeIdentifier:(id)a2 lastStrokeIdentifier:(id)a3 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 writingDirectionSortedSubstrokes:(id)a5 averageWritingOrientation:(struct CGVector { double x0; double x1; })a6 averageStrokeDeviation:(struct CGVector { double x0; double x1; })a7 writingDirectionSortedStrokeIdentifiers:(id)a8 localStrokeWritingOrientations:(const void *)a9 coalescedLastSubstrokes:(id)a10 groupingConfidence:(double)a11 lastSubstrokeIndexBeforeMerge:(long long)a12 firstStrokeOrigin:(struct CGPoint { double x0; double x1; })a13;
- (id)initWithAncestorIdentifier:(long long)a0 strokeIdentifiers:(id)a1 firstStrokeIdentifier:(id)a2 lastStrokeIdentifier:(id)a3 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 classification:(long long)a5 strategyIdentifier:(id)a6 writingDirectionSortedSubstrokes:(id)a7 averageWritingOrientation:(struct CGVector { double x0; double x1; })a8 averageStrokeDeviation:(struct CGVector { double x0; double x1; })a9 writingDirectionSortedStrokeIdentifiers:(id)a10 localStrokeWritingOrientations:(const void *)a11 coalescedLastSubstrokes:(id)a12 groupingConfidence:(double)a13 firstStrokeOrigin:(struct CGPoint { double x0; double x1; })a14;
- (id)initWithStrokeIdentifiers:(id)a0 firstStrokeIdentifier:(id)a1 lastStrokeIdentifier:(id)a2 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 classification:(long long)a4 strategyIdentifier:(id)a5 writingDirectionSortedSubstrokes:(id)a6 averageWritingOrientation:(struct CGVector { double x0; double x1; })a7 averageStrokeDeviation:(struct CGVector { double x0; double x1; })a8 writingDirectionSortedStrokeIdentifiers:(id)a9 localStrokeWritingOrientations:(const void *)a10 coalescedLastSubstrokes:(id)a11 groupingConfidence:(double)a12 firstStrokeOrigin:(struct CGPoint { double x0; double x1; })a13;
- (id)initWithUniqueIdentifier:(long long)a0 ancestorIdentifier:(long long)a1 strokeIdentifiers:(id)a2 firstStrokeIdentifier:(id)a3 lastStrokeIdentifier:(id)a4 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a5 classification:(long long)a6 strategyIdentifier:(id)a7 writingDirectionSortedSubstrokes:(id)a8 averageWritingOrientation:(struct CGVector { double x0; double x1; })a9 averageStrokeDeviation:(struct CGVector { double x0; double x1; })a10 writingDirectionSortedStrokeIdentifiers:(id)a11 localStrokeWritingOrientations:(const void *)a12 coalescedLastSubstrokes:(id)a13 groupingConfidence:(double)a14 firstStrokeOrigin:(struct CGPoint { double x0; double x1; })a15;
- (long long)lastSubstrokeIndexBeforeMerge;
- (void *)localStrokeWritingOrientations;
- (struct CGVector { double x0; double x1; })localWritingOrientationAtStrokeIndex:(long long)a0;
- (struct CGPath { } *)newEstimatedBaselineForStrokesWithTokens:(id)a0 tokenStrokeIdentifiers:(id)a1;
- (id)writingDirectionSortedSubstrokes;

@end
