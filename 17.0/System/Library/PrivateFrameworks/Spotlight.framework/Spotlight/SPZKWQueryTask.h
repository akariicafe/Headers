@interface SPZKWQueryTask : SPQueryTask

+ (void)initialize;
+ (int)maxSuggestedApps;

- (void)start;
- (id)unsafeSections;
- (void)addApplicationResultsFromPredictionResponse:(id)a0 toSection:(id)a1 queryIdent:(unsigned long long)a2;
- (id)unsafeSessionEntityString;

@end
