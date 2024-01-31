@class LSApplicationIdentity;

@interface IPAppStateSource : IPInstallableStateSource {
    LSApplicationIdentity *_appIdentity;
}

- (id)initWithApplicationIdentity:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)currentProgressForSource:(id)a0 error:(id *)a1;
- (unsigned long long)installableType;
- (void)notifyOfUpdate:(id)a0;
- (id)collationKey;
- (id)currentStateWithError:(id *)a0;
- (id)initWithApplicationIdentity:(id)a0 forStateSourceRegistry:(id)a1;
- (id)launchServicesIdentity;
- (void)noteInstallStarted;
- (void)noteRemoved;
- (id)progressSourceWithError:(id *)a0;

@end
