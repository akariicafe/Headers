@class NSString, NSDate;

@interface BMAppMediaUsage : BMEventBase <BMStoreData> {
    BOOL _hasRaw_absoluteTimestamp;
    double _raw_absoluteTimestamp;
}

@property (readonly, nonatomic) BOOL starting;
@property (nonatomic) BOOL hasStarting;
@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) NSString *URL;
@property (readonly, nonatomic) NSString *mediaURL;
@property (readonly, nonatomic) BOOL isUsageTrusted;
@property (nonatomic) BOOL hasIsUsageTrusted;
@property (readonly, nonatomic) NSDate *absoluteTimestamp;
@property (readonly, nonatomic) NSString *safariProfileID;
@property (readonly, nonatomic) NSString *uniqueID;
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
- (id)initWithStarting:(id)a0 bundleID:(id)a1 URL:(id)a2 mediaURL:(id)a3 isUsageTrusted:(id)a4 absoluteTimestamp:(id)a5 safariProfileID:(id)a6;
- (id)initWithStarting:(id)a0 bundleID:(id)a1 URL:(id)a2 mediaURL:(id)a3 isUsageTrusted:(id)a4 absoluteTimestamp:(id)a5 safariProfileID:(id)a6 uniqueID:(id)a7;

@end
