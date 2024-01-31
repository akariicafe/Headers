@class HDSPEnvironment, NSString, NSDate, NSObject;
@protocol OS_dispatch_source;

@interface HDSPSleepDaemon : NSObject <HDSPDiagnosticsProvider>

@property (readonly, nonatomic) NSDate *launchDate;
@property (readonly, nonatomic) NSObject<OS_dispatch_source> *sigtermSource;
@property (readonly, nonatomic) HDSPEnvironment *environment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)start;
- (id)diagnosticDescription;
- (void)_setupSigtermHandler;
- (void).cxx_destruct;
- (id)diagnosticInfo;
- (void)_handleSigterm;
- (id)initWithBehavior:(id)a0;

@end
