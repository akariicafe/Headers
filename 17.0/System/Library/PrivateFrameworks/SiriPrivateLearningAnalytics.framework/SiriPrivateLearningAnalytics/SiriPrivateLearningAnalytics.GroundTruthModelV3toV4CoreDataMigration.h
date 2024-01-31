@interface SiriPrivateLearningAnalytics.GroundTruthModelV3toV4CoreDataMigration : NSEntityMigrationPolicy {
    void /* unknown type, empty encoding */ messagesGroundTruthName;
    void /* unknown type, empty encoding */ promptGroundTruthName;
    void /* unknown type, empty encoding */ promptTaskAttribute;
    void /* unknown type, empty encoding */ messagesSiriKitTaskName;
    void /* unknown type, empty encoding */ suggestionOutcomeGroundTruthName;
    void /* unknown type, empty encoding */ suggestionOutcomDomainAttribute;
    void /* unknown type, empty encoding */ messagesDomainEnumValue;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)createDestinationInstancesForSourceInstance:(id)a0 entityMapping:(id)a1 manager:(id)a2 error:(id *)a3;

@end
