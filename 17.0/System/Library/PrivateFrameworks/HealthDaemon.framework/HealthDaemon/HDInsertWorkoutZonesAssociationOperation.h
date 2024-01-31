@class NSArray;

@interface HDInsertWorkoutZonesAssociationOperation : HDJournalableOperation {
    NSArray *_workoutZoneAssociations;
    long long _syncProvenance;
}

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)performWithProfile:(id)a0 transaction:(id)a1 error:(id *)a2;
- (id)initWithCoder:(id)a0;
- (id)initWithCodableWorkoutZoneAssociations:(id)a0 syncProvenance:(long long)a1;

@end
