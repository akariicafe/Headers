@class NSString, SMTSiriIntendedInfo, NSArray, AFSpeechPackage;

@interface SMTTCUPackage : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *tcuId;
@property (readonly, copy, nonatomic) NSString *requestId;
@property (readonly, nonatomic) long long tcuState;
@property (readonly, nonatomic) long long speechEvent;
@property (readonly, nonatomic) long long voiceTriggerPhraseType;
@property (readonly, copy, nonatomic) SMTSiriIntendedInfo *siriIntendedInfo;
@property (readonly, copy, nonatomic) NSArray *prevTCUIds;
@property (readonly, nonatomic) double startAudioTimeStampInMs;
@property (readonly, nonatomic) double endAudioTimeStampInMs;
@property (readonly, copy, nonatomic) AFSpeechPackage *speechPackage;

+ (id)newWithBuilder:(id /* block */)a0;

- (id)_descriptionWithIndent:(unsigned long long)a0;
- (id)initWithBuilder:(id /* block */)a0;
- (id)mutatedCopyWithMutator:(id /* block */)a0;
- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithTcuId:(id)a0 requestId:(id)a1 tcuState:(long long)a2 speechEvent:(long long)a3 voiceTriggerPhraseType:(long long)a4 siriIntendedInfo:(id)a5 prevTCUIds:(id)a6 startAudioTimeStampInMs:(double)a7 endAudioTimeStampInMs:(double)a8 speechPackage:(id)a9;

@end
