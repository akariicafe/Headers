@protocol IPStateObserver, IPStateAndProgressRegistry;

@interface IPInstallableStateSource : NSObject {
    id<IPStateAndProgressRegistry> _associatedRegistry;
    BOOL _resumed;
}

@property (readonly) unsigned long long installableType;
@property (weak, nonatomic) id<IPStateObserver> observer;

- (void)dealloc;
- (void)resume;
- (void).cxx_destruct;
- (id)initWithRegistry:(id)a0;
- (id)currentProgressForSource:(id)a0 error:(id *)a1;
- (unsigned long long)installableType;
- (void)notifyOfUpdate:(id)a0;
- (id)associatedRegistry;
- (id)collationKey;
- (id)currentStateWithError:(id *)a0;
- (void)noteInstallStarted;
- (id)progressSourceWithError:(id *)a0;

@end
