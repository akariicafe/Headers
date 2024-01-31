@class NSMutableDictionary;

@interface IPInstallableProgressData : NSObject <NSSecureCoding, NSCopying> {
    NSMutableDictionary *_phaseStates;
    double _currentFractionCompleted;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long installPhase;
@property (nonatomic) unsigned long long finalPhase;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (double)fractionCompleted;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setCompletedUnitCount:(unsigned long long)a0 forPhase:(unsigned long long)a1;
- (id)_findOrCreatePhaseState:(unsigned long long)a0;
- (void)_recalculateCurrentFractionCompleted;
- (unsigned long long)completedUnitCountForPhase:(unsigned long long)a0;
- (void)setTotalUnitCount:(unsigned long long)a0 forPhase:(unsigned long long)a1;
- (void)setTotalUnitCountsForPhases:(id)a0;
- (unsigned long long)totalUnitCountForPhase:(unsigned long long)a0;

@end
