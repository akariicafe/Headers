@class NSString;

@interface CSAttendingOptions : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long attendingType;
@property (readonly, nonatomic) unsigned long long startAttendingHostTime;
@property (readonly, nonatomic) BOOL useVAD;
@property (readonly, nonatomic) BOOL useOwnVoiceVAD;
@property (readonly, nonatomic) BOOL useBoron;
@property (readonly, nonatomic) double startOfSpeechThresholdInMs;
@property (readonly, nonatomic) double startOfSpeechNearMissThresholdInMs;
@property (readonly, nonatomic) double prependAudioDuration;
@property (readonly, nonatomic) double timeoutThresholdInSec;
@property (readonly, nonatomic) long long triggerType;
@property (readonly, nonatomic) double audioStreamHoldingDurationInSec;
@property (readonly, nonatomic) long long recordType;
@property (readonly, nonatomic) NSString *deviceId;
@property (readonly, nonatomic) unsigned long long attendingListeningType;
@property (readonly, nonatomic) double pauseDurationThreshold;
@property (readonly, nonatomic) double maxPauseDelay;

+ (id)optionForFlexibleFollowupWithAudioRecordType:(long long)a0 deviceId:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAttendingType:(long long)a0;
- (id)initWithAttendingType:(long long)a0 startAttendingHostTime:(unsigned long long)a1 useVAD:(BOOL)a2 useOwnVoiceVAD:(BOOL)a3 useBoron:(BOOL)a4 startOfSpeechThresholdInMs:(double)a5 prependAudioDuration:(double)a6 timeoutThresholdInSec:(double)a7 triggerType:(long long)a8 audioStreamHoldingDurationInSec:(double)a9 audioRecordType:(long long)a10 deviceId:(id)a11 attendingListeningType:(unsigned long long)a12 pauseDurationThreshold:(double)a13 maxPauseDelay:(double)a14;

@end
