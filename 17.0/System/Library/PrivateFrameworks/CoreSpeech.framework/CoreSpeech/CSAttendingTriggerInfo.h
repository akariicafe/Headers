@class NSString;

@interface CSAttendingTriggerInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long attendingType;
@property (readonly, nonatomic) NSString *detectedToken;
@property (readonly, nonatomic) unsigned long long triggerMachTime;
@property (readonly, nonatomic) unsigned long long triggerAbsStartSampleId;
@property (readonly, nonatomic) long long audioRecordType;
@property (readonly, nonatomic) NSString *deviceId;
@property (readonly, nonatomic) float amountOfSpeechDetectedInMs;
@property (readonly, nonatomic) float triggerThresholdInMs;

+ (id)triggerInfoForServerInvoke;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAttendingType:(long long)a0 detectedToken:(id)a1 triggerMachTime:(unsigned long long)a2 triggerAbsStartSampleId:(unsigned long long)a3 audioRecordType:(long long)a4 audioRecordDeviceId:(id)a5 amountOfSpeechDetectedInMs:(float)a6 triggerThresholdInMs:(float)a7;

@end
