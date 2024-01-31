@class NSString, NSDate;

@interface BMDeviceSilentMode : BMEventBase <BMStoreData> {
    BOOL _hasRaw_untilTime;
    double _raw_untilTime;
}

@property (readonly, nonatomic) BOOL starting;
@property (nonatomic) BOOL hasStarting;
@property (readonly, nonatomic) int clientType;
@property (readonly, nonatomic) NSDate *untilTime;
@property (readonly, nonatomic) NSString *reason;
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
- (id)initWithStarting:(id)a0 clientType:(int)a1 untilTime:(id)a2 reason:(id)a3;

@end
