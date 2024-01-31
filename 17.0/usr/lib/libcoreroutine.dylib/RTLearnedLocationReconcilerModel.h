@interface RTLearnedLocationReconcilerModel : NSObject

- (double)_weightWithDeviceWeight:(double)a0 visitsPercentage:(double)a1 transitionsPercentage:(double)a2 semanticLabel:(BOOL)a3 firstVisit:(BOOL)a4 earliestTransition:(BOOL)a5 rawLocationCount:(unsigned long long)a6;
- (double)scoreForDeviceClass:(id)a0;
- (double)weightForVisit:(id)a0 modelContext:(id)a1;

@end
