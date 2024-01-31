@class NSArray, NSString;

@interface CHTopDownStrokeGroupingStrategy : CHStrokeGroupingStrategy {
    NSString *_strategyIdentifier;
    double _minimumDrawingSize;
    double _splitCostThreshold;
    double _transitionTimeWeight;
    double _transitionTimeUpperBound;
    double _verticalDistanceWeight;
    double _backTransitionWeight;
    double _backTransitionUpperBound;
    double _horizontalDistanceBarrier;
    double _horizontalDistanceWeight;
    double _aspectRatioWeight;
    double _writingDirectionWeight;
    double _writingDirectionUpperBound;
    double _writingDirectionMinCoeff;
    double _minLineHeightScore;
    double _minArcLengthScore;
    double _arcLengthDiffScoreCoeff;
    double _expectedSubstrokesPerLine;
    double _minSubstrokesForSplit;
    double _targetFitnessWeight;
    BOOL _reorderStrokes;
    long long _writingOrientation;
}

@property (readonly, nonatomic) NSArray *textInputTargets;

- (void).cxx_destruct;
- (id)initWithStrokeProvider:(id)a0 locale:(id)a1 textInputTargets:(id)a2;
- (id)recognizableDrawingForStrokeGroup:(id)a0 translationVector:(struct CGVector { double x0; double x1; })a1 originalDrawing:(id *)a2 orderedStrokesIDs:(id *)a3 rescalingFactor:(double *)a4;
- (id)strategyIdentifier;
- (id)updatedGroupingResult:(id)a0 byAddingStrokes:(id)a1 removingStrokeIdentifiers:(id)a2 stableStrokeIdentifiers:(id)a3 allSubstrokesByStrokeIdentifier:(id)a4 withCancellationBlock:(id /* block */)a5;

@end
