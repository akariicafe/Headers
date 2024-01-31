@class HDSQLitePredicate, HDProfile, HDDatabaseTransactionContext;

@interface ACHWorkoutUtility : NSObject

@property (weak, nonatomic) HDProfile *profile;
@property (retain, nonatomic) HDSQLitePredicate *firstPartyPredicate;
@property (copy, nonatomic) HDDatabaseTransactionContext *databaseContext;

- (unsigned long long)numberOfFirstPartyWorkoutsWithDuration:(double)a0 containedInInterval:(id)a1;
- (id)mindfulMinutesForForDateInterval:(id)a0;
- (id)initWithProfile:(id)a0;
- (id)bestDistanceForFirstPartyWorkoutsWithType:(unsigned long long)a0 endingBeforeDate:(id)a1;
- (void)_performReadTransaction:(id)a0 error:(id *)a1 block:(id /* block */)a2;
- (id)workoutsInDateInterval:(id)a0;
- (id)_predicateWithDuration:(double)a0 withType:(id)a1 startingAtOrAfterDate:(id)a2 endingOnOrBeforeDate:(id)a3 firstPartyOnly:(BOOL)a4;
- (unsigned long long)_countOfSamplesWithPredicate:(id)a0 andLocationType:(unsigned long long)a1;
- (unsigned long long)numberOfFirstPartyWorkoutsWithDuration:(double)a0 withType:(unsigned long long)a1 endingOnOrBeforeDate:(id)a2;
- (id)workoutsWithDuration:(double)a0 withType:(id)a1 startingAtOrAfterDate:(id)a2 endingOnOrBeforeDate:(id)a3 firstPartyOnly:(BOOL)a4;
- (unsigned long long)numberOfWorkoutsWithDuration:(double)a0 containedInInterval:(id)a1;
- (unsigned long long)_countOfSamplesWithPredicate:(id)a0;
- (void).cxx_destruct;
- (double)_sumMindfulMinutesForSessions:(id)a0 dateInterval:(id)a1;
- (id)bestEnergyBurnedForFirstPartyWorkoutsWithType:(unsigned long long)a0 endingBeforeDate:(id)a1;
- (id)_readingContextWithIdentifier:(id)a0;
- (unsigned long long)numberOfFirstPartyWorkoutsWithDuration:(double)a0 withType:(unsigned long long)a1 andLocation:(unsigned long long)a2 containedInInterval:(id)a3;

@end
