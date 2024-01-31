@interface ACHActivityTriggerGenerator : NSObject

+ (unsigned long long)allPossibleTriggers;

- (BOOL)_goalTypeIsMoveType:(long long)a0;
- (struct { long long x0; long long x1; double x2; double x3; double x4; double x5; double x6; long long x7; long long x8; long long x9; long long x10; long long x11; long long x12; double x13; double x14; double x15; BOOL x16; BOOL x17; double x18; })_incrementWithInitialState:(struct { long long x0; long long x1; double x2; double x3; double x4; double x5; double x6; long long x7; long long x8; long long x9; long long x10; long long x11; long long x12; double x13; double x14; double x15; BOOL x16; BOOL x17; double x18; })a0 forGoalType:(long long)a1 dataProvider:(id)a2 goalMetHandler:(id /* block */)a3;
- (unsigned long long)triggersForNewMoveDataWithDataProvider:(id)a0;
- (unsigned long long)triggersForNewStandDataWithDataProvider:(id)a0;
- (unsigned long long)triggersForNewMoveTimeDataWithDataProvider:(id)a0;
- (unsigned long long)_triggersForNewActivityDataWithGoalType:(long long)a0 dataProvider:(id)a1 goalMetHandler:(id /* block */)a2;
- (unsigned long long)triggersForNewExerciseDataWithDataProvider:(id)a0;

@end
