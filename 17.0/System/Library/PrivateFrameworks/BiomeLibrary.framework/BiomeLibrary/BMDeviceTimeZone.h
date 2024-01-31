@class NSString;

@interface BMDeviceTimeZone : BMEventBase <BMStoreData>

@property (readonly, nonatomic) double secondsFromGMT;
@property (nonatomic) BOOL hasSecondsFromGMT;
@property (readonly, nonatomic) NSString *name;
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
- (id)timeZone;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithSecondsFromGMT:(id)a0;
- (id)initWithSecondsFromGMT:(id)a0 name:(id)a1;

@end
