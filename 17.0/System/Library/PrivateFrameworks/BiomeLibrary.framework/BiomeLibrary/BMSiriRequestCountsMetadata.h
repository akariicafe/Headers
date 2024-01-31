@class NSString, NSDate;

@interface BMSiriRequestCountsMetadata : BMEventBase <BMStoreData> {
    BOOL _hasRaw_aggregationWindowStartTimestamp;
    double _raw_aggregationWindowStartTimestamp;
}

@property (readonly, nonatomic) int schedule;
@property (readonly, nonatomic) NSDate *aggregationWindowStartTimestamp;
@property (readonly, nonatomic) NSString *odmId;
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
- (id)initWithSchedule:(int)a0 aggregationWindowStartTimestamp:(id)a1 odmId:(id)a2;

@end
