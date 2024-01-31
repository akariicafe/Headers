@class VNOperationPoints;

@interface VNOperationPointsProvider : NSObject <VNOperationPointsProviding> {
    VNOperationPoints *_operationPoints;
}

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithOperationPoints:(id)a0;
- (id)operationPointsAndReturnError:(id *)a0;

@end
