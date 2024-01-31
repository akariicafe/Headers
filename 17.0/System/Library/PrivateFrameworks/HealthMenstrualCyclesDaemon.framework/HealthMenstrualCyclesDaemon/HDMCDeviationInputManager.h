@class HDKeyValueDomain, HDProfile;

@interface HDMCDeviationInputManager : NSObject {
    HDProfile *_profile;
    HDKeyValueDomain *_keyValueDomain;
    HDKeyValueDomain *_analyticsKeyValueDomain;
}

- (id)initWithProfile:(id)a0;
- (void).cxx_destruct;
- (BOOL)clearStateIfNecessaryFromSettings:(id)a0 usageRequirementsSatisfied:(BOOL)a1 error:(id *)a2;

@end
