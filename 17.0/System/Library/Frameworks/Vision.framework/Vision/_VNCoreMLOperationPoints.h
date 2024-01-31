@class NSArray;

@interface _VNCoreMLOperationPoints : VNOperationPoints {
    NSArray *_classLabels;
    NSArray *_precisionRecallCurves;
}

- (void).cxx_destruct;
- (BOOL)getClassificationMetrics:(id *)a0 forClassificationIdentifier:(id)a1 error:(id *)a2;
- (id)initWithClassLabels:(id)a0 precisionRecallCurves:(id)a1;

@end
