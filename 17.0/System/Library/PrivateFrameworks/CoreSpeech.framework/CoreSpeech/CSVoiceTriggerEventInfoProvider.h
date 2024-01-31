@class NSDictionary, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface CSVoiceTriggerEventInfoProvider : NSObject {
    NSMutableDictionary *_accessoryVoiceTriggerEvents;
    NSDictionary *_builtInVoiceTriggerEvent;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (copy, nonatomic) NSDictionary *rtsTriggerInfo;
@property (nonatomic) unsigned long long triggerNotifiedMachTime;

+ (id)sharedInstance;
+ (BOOL)isVoiceTriggerInfoAvailableLocally:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (BOOL)_isBuiltInDeviceFromDeviceId:(id)a0;
- (void)fetchVoiceTriggerInfoWithAudioContext:(id)a0 resultVoiceTriggerInfo:(id *)a1 resultRTSTriggerInfo:(id *)a2;
- (void)setVoiceTriggerInfo:(id)a0 deviceId:(id)a1;

@end
