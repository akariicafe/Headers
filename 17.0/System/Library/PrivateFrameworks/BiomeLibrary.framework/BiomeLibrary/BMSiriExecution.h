@class NSString, NSDate;

@interface BMSiriExecution : BMEventBase <BMStoreData> {
    BOOL _hasRaw_absoluteTimestamp;
    double _raw_absoluteTimestamp;
}

@property (readonly, nonatomic) NSString *taskId;
@property (readonly, nonatomic) int taskStep;
@property (readonly, nonatomic) NSString *statusReason;
@property (readonly, nonatomic) NSString *slotValue;
@property (readonly, nonatomic) NSString *intentName;
@property (readonly, nonatomic) NSString *appBundleID;
@property (readonly, nonatomic) NSString *interactionID;
@property (readonly, nonatomic) NSDate *absoluteTimestamp;
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
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithTaskId:(id)a0 taskStep:(int)a1 statusReason:(id)a2 slotValue:(id)a3 intentName:(id)a4 appBundleID:(id)a5 interactionID:(id)a6 absoluteTimestamp:(id)a7;

@end
