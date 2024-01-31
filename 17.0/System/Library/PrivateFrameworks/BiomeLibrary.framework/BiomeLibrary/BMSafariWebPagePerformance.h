@class NSString, NSDate;

@interface BMSafariWebPagePerformance : BMEventBase <BMStoreData> {
    BOOL _hasRaw_visited;
    double _raw_visited;
}

@property (readonly, nonatomic) NSString *domain;
@property (readonly, nonatomic) NSDate *visited;
@property (readonly, nonatomic) int platform;
@property (readonly, nonatomic) int performanceEvent;
@property (readonly, nonatomic) BOOL privacyProxy;
@property (nonatomic) BOOL hasPrivacyProxy;
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
- (id)initWithDomain:(id)a0 visited:(id)a1 platform:(int)a2 performanceEvent:(int)a3;
- (id)initWithDomain:(id)a0 visited:(id)a1 platform:(int)a2 performanceEvent:(int)a3 privacyProxy:(id)a4;

@end
