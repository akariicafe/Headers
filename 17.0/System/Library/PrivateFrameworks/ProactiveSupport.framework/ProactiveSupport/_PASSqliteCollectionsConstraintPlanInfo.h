@interface _PASSqliteCollectionsConstraintPlanInfo : NSObject {
    BOOL _unique;
    BOOL _omit;
    double _estimatedRows;
    double _estimatedCost;
}

- (id)initWithEstimatedRows:(double)a0 estimatedCost:(double)a1 unique:(BOOL)a2 omit:(BOOL)a3;

@end
