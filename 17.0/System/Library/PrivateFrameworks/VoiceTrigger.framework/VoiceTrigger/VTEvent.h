@class NSURL, NSDictionary;

@interface VTEvent : NSObject

@property (readonly, nonatomic) NSURL *jsonFileUrl;
@property (readonly, nonatomic) NSDictionary *voiceTriggerEventInfo;

+ (id)eventFromURL:(id)a0;
+ (long long)eventTypeFromURL:(id)a0;

- (void).cxx_destruct;
- (id)timestampString;
- (id)_packStringFromVTEventInfo:(id)a0 key:(id)a1;
- (id)_buildContent;
- (id)_buildDetail;
- (id)_buildTitle;
- (id)_buildTriggerContent;
- (id)_buildTriggerDetail;
- (id)_getFloatStringFromVTEventWithKey:(id)a0 decimal:(BOOL)a1;
- (id)_packAudioContent:(id)a0 filepath:(id)a1;
- (id)_packAudioURLFromVTEventInfo:(id)a0 key:(id)a1;
- (id)_packBooleanFromVTEventInfo:(id)a0 key:(id)a1;
- (id)_packStringContent:(id)a0 value:(id)a1;
- (void)_readJsonFile:(id)a0;
- (id)eventTrackerDictionary;
- (id)initWithEventLogURL:(id)a0;
- (id)jsonFileName;

@end
