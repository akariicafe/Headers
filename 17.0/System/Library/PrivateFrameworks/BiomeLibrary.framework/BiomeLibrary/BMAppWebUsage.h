@class NSString, NSDate;

@interface BMAppWebUsage : BMEventBase <BMStoreData> {
    BOOL _hasRaw_absoluteTimestamp;
    double _raw_absoluteTimestamp;
}

@property (readonly, nonatomic) NSString *uniqueID;
@property (readonly, nonatomic) NSDate *absoluteTimestamp;
@property (readonly, nonatomic) int usageState;
@property (readonly, nonatomic) NSString *webpageURL;
@property (readonly, nonatomic) NSString *webDomain;
@property (readonly, nonatomic) NSString *applicationID;
@property (readonly, nonatomic) NSString *deviceID;
@property (readonly, nonatomic) BOOL isUsageTrusted;
@property (nonatomic) BOOL hasIsUsageTrusted;
@property (readonly, nonatomic) NSString *safariProfileID;
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
- (id)initWithUniqueID:(id)a0 absoluteTimestamp:(id)a1 usageState:(int)a2 webpageURL:(id)a3 webDomain:(id)a4 applicationID:(id)a5 deviceID:(id)a6 isUsageTrusted:(id)a7 safariProfileID:(id)a8;

@end
