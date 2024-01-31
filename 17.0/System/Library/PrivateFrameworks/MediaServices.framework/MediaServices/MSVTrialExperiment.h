@class NSString, TRIClient, TRIExperimentIdentifiers;

@interface MSVTrialExperiment : NSObject {
    TRIClient *_trialClient;
    NSString *_namespaceName;
    TRIExperimentIdentifiers *_identifiers;
    BOOL _identifiersFetched;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) NSString *experimentID;
@property (readonly, nonatomic) NSString *treatmentID;
@property (readonly, nonatomic) NSString *deploymentID;

- (id)identifiers;
- (void)refresh;
- (void)invalidate;
- (id)description;
- (void).cxx_destruct;
- (id)metadataForFactor:(id)a0;
- (id)stringForFactor:(id)a0;
- (BOOL)boolForFactor:(id)a0;
- (double)doubleForFactor:(id)a0;
- (id)initWithProjectID:(long long)a0 namespaceName:(id)a1;
- (long long)longForFactor:(id)a0;

@end
