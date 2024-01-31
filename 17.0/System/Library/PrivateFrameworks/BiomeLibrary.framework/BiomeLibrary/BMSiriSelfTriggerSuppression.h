@class NSString;

@interface BMSiriSelfTriggerSuppression : BMEventBase <BMStoreData>

@property (readonly, nonatomic) unsigned int numSelfTriggersDetectedDuringEvent;
@property (nonatomic) BOOL hasNumSelfTriggersDetectedDuringEvent;
@property (readonly, nonatomic) double durationOfSelfTriggerEventInSec;
@property (nonatomic) BOOL hasDurationOfSelfTriggerEventInSec;
@property (readonly, nonatomic) int audioSource;
@property (readonly, nonatomic) BOOL isBluetoothSpeakerActive;
@property (nonatomic) BOOL hasIsBluetoothSpeakerActive;
@property (readonly, nonatomic) BOOL isBuiltInSpeakerActive;
@property (nonatomic) BOOL hasIsBuiltInSpeakerActive;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)columns;
+ (id)validKeyPaths;
+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (id)initByReadFrom:(id)a0;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)serialize;
- (void)writeTo:(id)a0;
- (id)jsonDictionary;
- (BOOL)isEqual:(id)a0;
- (id)initWithNumSelfTriggersDetectedDuringEvent:(id)a0 durationOfSelfTriggerEventInSec:(id)a1 audioSource:(int)a2 isBluetoothSpeakerActive:(id)a3 isBuiltInSpeakerActive:(id)a4;

@end
