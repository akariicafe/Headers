@class NSString, SecExperiment;

@interface SecExpConcrete_sec_experiment : NSObject <OS_sec_experiment> {
    SecExperiment *innerExperiment;
    unsigned long long numRuns;
    unsigned long long successRuns;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (const char *)identifier;
- (id)initWithName:(const char *)a0;
- (void).cxx_destruct;
- (const char *)name;
- (id)copyExperimentConfiguration;
- (BOOL)experimentIsAllowedForProcess;
- (id)initWithInnerExperiment:(id)a0;
- (BOOL)isSamplingDisabled;
- (BOOL)isSamplingDisabledWithDefault:(BOOL)a0;

@end
