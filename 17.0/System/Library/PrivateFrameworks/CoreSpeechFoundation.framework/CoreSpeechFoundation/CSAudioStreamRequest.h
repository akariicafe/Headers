@class CSAudioRecordContext, NSObject;
@protocol OS_xpc_object;

@interface CSAudioStreamRequest : NSObject <NSCopying>

@property (readonly, nonatomic) NSObject<OS_xpc_object> *xpcObject;
@property (retain, nonatomic) CSAudioRecordContext *recordContext;
@property (nonatomic) BOOL requiresHistoricalBuffer;
@property (nonatomic) BOOL useCustomizedRecordSettings;
@property (nonatomic) long long audioFormat;
@property (nonatomic) double sampleRate;
@property (nonatomic) unsigned int lpcmBitDepth;
@property (nonatomic) BOOL lpcmIsFloat;
@property (nonatomic) unsigned int numberOfChannels;
@property (nonatomic) unsigned int encoderBitRate;
@property (nonatomic) unsigned long long clientIdentity;
@property (nonatomic) BOOL requestSkipClientMonitorUpdate;
@property (nonatomic) BOOL requestRecordModeLock;
@property (nonatomic) BOOL requestListeningMicIndicatorLock;

+ (id)defaultRequestWithContext:(id)a0;
+ (id)requestForLpcmRecordSettingsWithContext:(id)a0;
+ (id)requestForOpusRecordSettingsWithContext:(id)a0;
+ (id)requestForSpeexRecordSettingsWithContext:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (id)initWithXPCObject:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initTandemWithRequest:(id)a0;

@end
