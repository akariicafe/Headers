@interface HDWorkoutCondenserDiagnosticOperation : HDDiagnosticOperation

- (void)run;
- (void)_reportCondensableWorkoutsWithTaskClient:(id)a0;
- (void)_reportCondensedWorkoutsWithTaskClient:(id)a0;
- (void)_reportWorkoutCondenserTTRValuesWithDatabase:(id)a0;
- (id)reportFilename;

@end
