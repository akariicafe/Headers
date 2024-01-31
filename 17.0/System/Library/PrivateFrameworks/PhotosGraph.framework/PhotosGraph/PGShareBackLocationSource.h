@interface PGShareBackLocationSource : PGShareBackSource

+ (id)suggesterInputsByDateIntervalForInputs:(id)a0;

- (BOOL)prepareSourceWithGraph:(id)a0;
- (id)suggesterResultsForInputs:(id)a0 momentNodes:(id)a1 inGraph:(id)a2 error:(id *)a3;

@end
