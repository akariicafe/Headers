@class MIAppIdentity, NSString, IPInstallableProgressData, LSApplicationIdentity;
@protocol IPPublishedIdentityProgressObserver;

@interface IPPublishedIdentityProgress : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    IPInstallableProgressData *_progressData;
    MIAppIdentity *_miIdentity;
    LSApplicationIdentity *_lsIdentity;
    id<IPPublishedIdentityProgressObserver> _observer;
}

@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) NSString *personaUniqueString;
@property (nonatomic) unsigned long long installPhase;
@property (nonatomic) unsigned long long finalPhase;

- (id)personaUniqueString;
- (id)bundleIdentifier;
- (void).cxx_destruct;
- (id)currentProgress;
- (unsigned long long)installPhase;
- (void)setInstallPhase:(unsigned long long)a0;
- (unsigned long long)finalPhase;
- (void)setCompletedUnitCount:(unsigned long long)a0 forPhase:(unsigned long long)a1;
- (unsigned long long)completedUnitCountForPhase:(unsigned long long)a0;
- (void)finishProgressWithState:(unsigned long long)a0;
- (id)initWithAppIdentity:(id)a0 observer:(id)a1;
- (id)lsIdentity;
- (id)miIdentity;
- (void)setFinalPhase:(unsigned long long)a0;
- (void)setTotalUnitCount:(unsigned long long)a0 forPhase:(unsigned long long)a1;
- (void)setTotalUnitCountsForPhases:(id)a0;
- (unsigned long long)totalUnitCountForPhase:(unsigned long long)a0;

@end
