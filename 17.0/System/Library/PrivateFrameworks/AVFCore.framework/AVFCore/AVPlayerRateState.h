@class NSString;

@interface AVPlayerRateState : NSObject <NSCopying>

@property (readonly, nonatomic) float rate;
@property (readonly, nonatomic) BOOL automaticallyWaitsToMinimizeStalling;
@property (readonly, nonatomic) BOOL usesLegacyAutomaticWaitingBehavior;
@property (readonly, nonatomic) long long timeControlStatus;
@property (readonly, nonatomic) NSString *reasonForWaitingToPlay;

- (void)dealloc;
- (id)rateStateBySettingTimeControlStatus:(long long)a0 reasonForWaitingToPlay:(id)a1 nameForLogging:(id)a2;
- (id)rateStateBySettingUsesLegacyAutomaticWaitingBehavior:(BOOL)a0;
- (id)rateStateByUpdatingBasedOnPresenceOfCurrentInterstitialEvent:(BOOL)a0 nameForLogging:(id)a1;
- (id)rateStateBySettingAutomaticallyWaitsToMinimizeStalling:(BOOL)a0;
- (id)rateStateByInferringTimeControlStatusAndWaitingReasonBasedOnPresenceOfCurrentItem:(BOOL)a0 hasCurrentInterstitialEvent:(BOOL)a1 nameForLogging:(id)a2;
- (id)rateStateByUpdatingBasedOnFigPlayerPlaybackState:(int)a0 hasCurrentInterstitialEvent:(BOOL)a1 nameForLogging:(id)a2;
- (id)rateStateByUpdatingBasedOnFigPlayer:(struct OpaqueFigPlayer { } *)a0 hasCurrentItem:(BOOL)a1 hasCurrentInterstitialEvent:(BOOL)a2 nameForLogging:(id)a3;
- (id)rateStateBySettingRate:(float)a0 nameForLogging:(id)a1;
- (id)initWithAutomaticallyWaitsToMinimizeStalling:(BOOL)a0 usesLegacyAutomaticWaitingBehavior:(BOOL)a1 timeControlStatus:(long long)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
