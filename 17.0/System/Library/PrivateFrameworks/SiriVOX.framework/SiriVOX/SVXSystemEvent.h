@class NSArray, SVXStoreDemo, SVXDeviceSetupFlowScene, SVXSpeechSynthesisRequest;

@interface SVXSystemEvent : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) unsigned long long timestamp;
@property (readonly, copy, nonatomic) SVXDeviceSetupFlowScene *deviceSetupFlowScene;
@property (readonly, copy, nonatomic) SVXStoreDemo *storeDemo;
@property (readonly, copy, nonatomic) NSArray *orderedAlarmAndTimerIDs;
@property (readonly, copy, nonatomic) SVXSpeechSynthesisRequest *speechSynthesisRequest;
@property (readonly, nonatomic) unsigned int audioSessionID;

+ (id)newWithBuilder:(id /* block */)a0;

- (id)_descriptionWithIndent:(unsigned long long)a0;
- (id)mutatedCopyWithMutator:(id /* block */)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithType:(long long)a0 timestamp:(unsigned long long)a1;
- (id)initWithType:(long long)a0 timestamp:(unsigned long long)a1 alarm:(id)a2 deviceSetupFlowScene:(id)a3;
- (id)initWithType:(long long)a0 timestamp:(unsigned long long)a1 alarm:(id)a2;
- (id)initWithType:(long long)a0 timestamp:(unsigned long long)a1 deviceSetupFlowScene:(id)a2;
- (id)initWithType:(long long)a0 timestamp:(unsigned long long)a1 deviceSetupFlowScene:(id)a2 storeDemo:(id)a3 orderedAlarmAndTimerIDs:(id)a4;
- (id)initWithType:(long long)a0 timestamp:(unsigned long long)a1 deviceSetupFlowScene:(id)a2 storeDemo:(id)a3 orderedAlarmAndTimerIDs:(id)a4 audioSessionID:(unsigned int)a5;
- (id)initWithType:(long long)a0 timestamp:(unsigned long long)a1 deviceSetupFlowScene:(id)a2 storeDemo:(id)a3 orderedAlarmAndTimerIDs:(id)a4 speechSynthesisRequest:(id)a5 audioSessionID:(unsigned int)a6;
- (id)initWithType:(long long)a0 timestamp:(unsigned long long)a1 storeDemo:(id)a2;
- (id)initWithType:(long long)a0 timestamp:(unsigned long long)a1 timer:(id)a2;

@end
