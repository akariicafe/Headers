@class CSAudioStreamHoldRequestOption;

@interface CSAudioStopStreamOption : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned long long stopRecordingReason;
@property (readonly, nonatomic) BOOL supportsMagus;
@property (readonly, nonatomic) unsigned long long expectedStopHostTime;
@property (readonly, nonatomic) double trailingSilenceDurationAtEndpoint;
@property (readonly, nonatomic) CSAudioStreamHoldRequestOption *holdRequest;

- (id)description;
- (id)xpcObject;
- (void).cxx_destruct;
- (id)initWithXPCObject:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithStopRecordingReason:(unsigned long long)a0 expectedStopHostTime:(unsigned long long)a1 trailingSilenceDurationAtEndpoint:(double)a2;
- (id)initWithStopRecordingReason:(unsigned long long)a0 expectedStopHostTime:(unsigned long long)a1 trailingSilenceDurationAtEndpoint:(double)a2 holdRequest:(id)a3 supportsMagus:(BOOL)a4;

@end
