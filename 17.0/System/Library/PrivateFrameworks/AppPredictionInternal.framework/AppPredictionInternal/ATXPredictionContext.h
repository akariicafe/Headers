@class ATXBluetoothDuetEvent, NSString, ATXPredictionTimeContext, ATXMicrolocationVisitDuetEvent, BMInferredModeEvent, NSDictionary, ATXPredictionDeviceStateContext, ATXPredictionAmbientLightContext, ATXPredictionUserContext, ATXPredictionLocationMotionContext, BMUserFocusComputedModeEvent;

@interface ATXPredictionContext : NSObject <BMStoreData, ATXProtoBufWrapper, NSSecureCoding, ATXProactiveSuggestionFeedbackContextProtocol, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) ATXPredictionDeviceStateContext *deviceStateContext;
@property (retain, nonatomic) ATXPredictionTimeContext *timeContext;
@property (retain, nonatomic) ATXPredictionLocationMotionContext *locationMotionContext;
@property (retain, nonatomic) ATXPredictionAmbientLightContext *ambientLightContext;
@property (retain, nonatomic) ATXPredictionUserContext *userContext;
@property (retain, nonatomic) NSDictionary *candidateIdentifiersLaunchAge;
@property (retain, nonatomic) BMInferredModeEvent *inferredModeEvent;
@property (retain, nonatomic) BMUserFocusComputedModeEvent *userFocusComputedModeEvent;
@property (retain, nonatomic) NSString *poiCategory;
@property (retain, nonatomic) ATXMicrolocationVisitDuetEvent *microlocationVisitEvent;
@property (retain, nonatomic) ATXBluetoothDuetEvent *bluetoothEvent;
@property (nonatomic) BOOL isOverridden;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (id)initWithProto:(id)a0;
- (void)updateTimeContextWithDate:(id)a0;
- (void)updateWithInjectedContext:(id)a0;
- (id)encodeAsProto;
- (id)initWithDeviceStateContext:(id)a0 timeContext:(id)a1 locationMotionContext:(id)a2 ambientLightContext:(id)a3 userContext:(id)a4;
- (id)proto;
- (id)serialize;
- (id)initWithProtoData:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDeviceStateContext:(id)a0 timeContext:(id)a1 locationMotionContext:(id)a2 ambientLightContext:(id)a3 userContext:(id)a4 isOverridden:(BOOL)a5;
- (id)jsonDict;
- (BOOL)checkAndReportDecodingFailureIfNeededForid:(id)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (id)json;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToATXPredictionContext:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
