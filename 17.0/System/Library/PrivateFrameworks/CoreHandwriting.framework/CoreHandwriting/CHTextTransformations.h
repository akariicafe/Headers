@class NSArray, CHStrokeGroupingResult, CHStrokeClassificationResult, NSMutableArray;
@protocol CHStrokeProvider;

@interface CHTextTransformations : NSObject {
    struct vector<CoreHandwriting::BoundingBox, std::allocator<CoreHandwriting::BoundingBox>> { struct BoundingBox *__begin_; struct BoundingBox *__end_; struct __compressed_pair<CoreHandwriting::BoundingBox *, std::allocator<CoreHandwriting::BoundingBox>> { struct BoundingBox *__value_; } __end_cap_; } _originalBoundingBoxes;
    struct vector<CoreHandwriting::BoundingBox, std::allocator<CoreHandwriting::BoundingBox>> { struct BoundingBox *__begin_; struct BoundingBox *__end_; struct __compressed_pair<CoreHandwriting::BoundingBox *, std::allocator<CoreHandwriting::BoundingBox>> { struct BoundingBox *__value_; } __end_cap_; } _transformedBoundingBoxes;
    NSArray *_contextStrokes;
    NSArray *_contextResults;
    id<CHStrokeProvider> _strokeProvider;
    CHStrokeGroupingResult *_strokeGroupingResult;
    CHStrokeClassificationResult *_strokeClassificationResult;
    NSMutableArray *_correctionAngles;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })fontTransferForDrawing:(id)a0 transcription:(id)a1 strokeClassification:(long long)a2 shouldCancel:(id /* block */)a3;
- (id)initWithContextStrokes:(id)a0 contextResults:(id)a1 strokeGroupingResult:(id)a2 strokeClassificationResult:(id)a3 strokeProvider:(id)a4;
- (struct CHTextTransformationResult { id x0; id x1; id x2; })italicizeWithProgress:(id)a0 shouldCancel:(id /* block */)a1;
- (struct CHTextTransformationResult { id x0; id x1; id x2; })straightenWithProgress:(id)a0 shouldCancel:(id /* block */)a1;
- (id /* block */)textStrokePointTransformationFromAffineTransformation:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;

@end
