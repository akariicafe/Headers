@class IRSystemStateDO, NSString, IRNearbyDeviceContainerDO, IRCandidatesContainerDO, NSDate, IRMiloLslPredictionDO;

@interface IRReplayEventDO : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) NSString *contextChangeReason;
@property (readonly, nonatomic) IRCandidatesContainerDO *candidatesContainer;
@property (readonly, nonatomic) IRMiloLslPredictionDO *miloLslPrediction;
@property (readonly, nonatomic) IRSystemStateDO *systemState;
@property (readonly, nonatomic) IRNearbyDeviceContainerDO *nearbyDeviceContainerDO;

+ (id)replayEventDOWithDate:(id)a0 contextChangeReason:(id)a1 candidatesContainer:(id)a2 miloLslPrediction:(id)a3 systemState:(id)a4 nearbyDeviceContainerDO:(id)a5;

- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithReplacementSystemState:(id)a0;
- (id)copyWithReplacementCandidatesContainer:(id)a0;
- (id)copyWithReplacementContextChangeReason:(id)a0;
- (id)copyWithReplacementDate:(id)a0;
- (id)copyWithReplacementMiloLslPrediction:(id)a0;
- (id)copyWithReplacementNearbyDeviceContainerDO:(id)a0;
- (id)initWithDate:(id)a0 contextChangeReason:(id)a1 candidatesContainer:(id)a2 miloLslPrediction:(id)a3 systemState:(id)a4 nearbyDeviceContainerDO:(id)a5;
- (BOOL)isEqualToReplayEventDO:(id)a0;

@end
