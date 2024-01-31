@class NSString, NSSet;

@interface _SBDirectToAirPlayPolicyState : NSObject

@property (readonly, copy, nonatomic) NSString *routeName;
@property (readonly, copy, nonatomic) NSSet *foregroundEligibleBundleIDs;
@property (readonly, copy, nonatomic) NSSet *foregroundIneligibleBundleIDs;
@property (readonly, copy, nonatomic) NSSet *foregroundReadyBundleIDs;
@property (readonly, copy, nonatomic) NSSet *foregroundPlayingBundleIDs;
@property (readonly, copy, nonatomic) NSSet *allForegroundBundleIDs;
@property (readonly, copy, nonatomic) NSSet *allPlayingBundleIDs;
@property (readonly, nonatomic) BOOL currentRouteIsWired;
@property (readonly, nonatomic) BOOL playingAppIsActivelyPlaying;
@property (readonly, nonatomic) BOOL suppressReadyStateForLock;
@property (readonly, nonatomic) BOOL suppressStateChangesForObscured;
@property (readonly, nonatomic) BOOL anyEligibleAppIsForeground;
@property (readonly, nonatomic) BOOL anyReadyAppIsForeground;
@property (readonly, nonatomic) BOOL anyPlayingAppIsForeground;
@property (readonly, nonatomic) BOOL anyIneligibleAppIsForeground;
@property (readonly, nonatomic) BOOL anyAppIsPlaying;
@property (readonly, nonatomic) unsigned long long policyStateSerialNumber;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
