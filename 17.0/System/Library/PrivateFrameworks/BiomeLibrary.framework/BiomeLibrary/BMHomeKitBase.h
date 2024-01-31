@class NSString, NSDate;

@interface BMHomeKitBase : BMEventBase <BMStoreData> {
    BOOL _hasRaw_absoluteTimestamp;
    double _raw_absoluteTimestamp;
}

@property (readonly, nonatomic) NSDate *absoluteTimestamp;
@property (readonly, nonatomic) double duration;
@property (nonatomic) BOOL hasDuration;
@property (readonly, nonatomic) NSString *homeUniqueIdentifier;
@property (readonly, nonatomic) int homeOccupancy;
@property (nonatomic) BOOL hasHomeOccupancy;
@property (readonly, nonatomic) NSString *source;
@property (readonly, nonatomic) NSString *clientName;
@property (readonly, nonatomic) NSString *eventCorrelationIdentifier;
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
- (id)initWithAbsoluteTimestamp:(id)a0 duration:(id)a1 homeUniqueIdentifier:(id)a2 homeOccupancy:(id)a3 source:(id)a4 clientName:(id)a5 eventCorrelationIdentifier:(id)a6;

@end
