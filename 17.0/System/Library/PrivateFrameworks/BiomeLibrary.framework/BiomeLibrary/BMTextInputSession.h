@class NSString, NSDate;

@interface BMTextInputSession : BMEventBase <BMStoreData> {
    BOOL _hasRaw_timestamp;
    double _raw_timestamp;
}

@property (readonly, nonatomic) double duration;
@property (nonatomic) BOOL hasDuration;
@property (readonly, nonatomic) NSDate *timestamp;
@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) int sessionInput;
@property (readonly, nonatomic) NSString *sessionID;
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
- (id)initWithDuration:(id)a0 timestamp:(id)a1 bundleID:(id)a2 sessionInput:(int)a3;
- (id)initWithDuration:(id)a0 timestamp:(id)a1 bundleID:(id)a2 sessionInput:(int)a3 sessionID:(id)a4;

@end
