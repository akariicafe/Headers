@class NSSet, NSObject;
@protocol OS_dispatch_queue;

@interface ADLoggingProfileMonitor : NSObject

@property (retain, nonatomic) NSSet *profileIdentifiers;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *initQueue;

- (void)_fetchInstalledProfilesAndListen;
- (id)init;
- (id)fetchInstalledProfileIdentifiers;
- (void)_profilesChanged:(id)a0;
- (void).cxx_destruct;
- (void)_beginMonitoring;
- (BOOL)_hasRelevantProfileChanged:(id)a0;

@end
