@class NSMutableDictionary;

@interface ATXCorrelationMatrixGuardedData : NSObject {
    NSMutableDictionary *_correlationMatrix;
    NSMutableDictionary *_locationTotals;
}

- (id)init;
- (id)initWithCorrelationMatrix:(id)a0 locationTotals:(id)a1;
- (void).cxx_destruct;

@end
