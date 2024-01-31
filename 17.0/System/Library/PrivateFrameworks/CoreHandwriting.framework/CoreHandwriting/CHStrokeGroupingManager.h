@class NSArray, CHRecognitionSessionResult, NSDictionary;
@protocol CHStrokeProvider;

@interface CHStrokeGroupingManager : NSObject {
    NSDictionary *_groupingStrategiesByIdentifierForTextStrokeClasses;
}

@property (readonly, nonatomic) id<CHStrokeProvider> strokeProvider;
@property (readonly, nonatomic) CHRecognitionSessionResult *sessionLastResult;
@property (readonly, nonatomic) NSArray *locales;
@property (readonly, nonatomic) BOOL isInlineContinuousMode;
@property (readonly, nonatomic) NSArray *textInputTargets;

- (void).cxx_destruct;
- (id)initWithStrokeProvider:(id)a0 sessionLastResult:(id)a1 locales:(id)a2 isInlineContinuousMode:(BOOL)a3 inlineContinuousModeTargets:(id)a4;
- (id)recognizableDrawingForStrokeGroup:(id)a0 translationVector:(struct CGVector { double x0; double x1; })a1 originalDrawing:(id *)a2 orderedStrokesIDs:(id *)a3 rescalingFactor:(double *)a4;
- (id)strokesForIdentifiers:(id)a0;
- (id)updatedGroupingResultByAddingStrokes:(id)a0 removingStrokeIdentifiers:(id)a1 orderedStrokeIdentifiers:(id)a2 strokeClassificationResult:(id)a3 cancellationBlock:(id /* block */)a4;

@end
