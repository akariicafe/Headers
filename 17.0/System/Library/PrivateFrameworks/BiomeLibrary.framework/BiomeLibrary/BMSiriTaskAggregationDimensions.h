@class NSString;

@interface BMSiriTaskAggregationDimensions : BMEventBase <BMStoreData>

@property (readonly, nonatomic) int productArea;
@property (readonly, nonatomic) NSString *siriInputLocale;
@property (readonly, nonatomic) NSString *systemLocale;
@property (readonly, nonatomic) NSString *countryCode;
@property (readonly, nonatomic) NSString *deviceType;
@property (readonly, nonatomic) NSString *systemBuild;
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
- (id)initWithProductArea:(int)a0 siriInputLocale:(id)a1 systemLocale:(id)a2 countryCode:(id)a3 deviceType:(id)a4 systemBuild:(id)a5;

@end
