@class NSUUID, NSDate;

@interface SOSStatus : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSUUID *uuid;
@property (nonatomic) long long trigger;
@property (retain, nonatomic) NSDate *timeOfDetection;
@property (retain, nonatomic) NSDate *timeOfResolution;
@property (nonatomic) long long resolution;
@property (nonatomic) long long flowState;
@property (nonatomic) BOOL isPairedDeviceStatus;
@property (readonly, nonatomic) BOOL isFlowActive;
@property (readonly, nonatomic) BOOL isFlowActiveAndNotResting;
@property (readonly, nonatomic) BOOL isPreCall;
@property (readonly, nonatomic) BOOL shouldBlockNonEmergencyCalls;
@property (readonly, nonatomic) BOOL shouldRejectNewSOSTriggers;
@property (readonly, nonatomic) BOOL shouldRetriggerSOS;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isValid;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithUUID:(id)a0 trigger:(long long)a1 timeOfDetection:(id)a2;
- (id)initWithUUID:(id)a0 trigger:(long long)a1 timeOfDetection:(id)a2 timeOfResolution:(id)a3 resolution:(long long)a4;
- (id)initWithUUID:(id)a0 trigger:(long long)a1 timeOfDetection:(id)a2 timeOfResolution:(id)a3 resolution:(long long)a4 flowState:(long long)a5 isPairedDeviceStatus:(BOOL)a6;

@end
