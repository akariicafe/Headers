@class NSString;

@interface BMMediaStreamingStats : BMEventBase <BMStoreData>

@property (readonly, nonatomic) NSString *appName;
@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) double measure;
@property (nonatomic) BOOL hasMeasure;
@property (readonly, nonatomic) NSString *extra;
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
- (id)initWithAppName:(id)a0 eventName:(id)a1 measure:(id)a2 extra:(id)a3;
- (id)jsonDictionary;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
