@class NSString, NSDate;

@interface BMMotionActivity : BMEventBase <BMStoreData> {
    BOOL _hasRaw_startDate;
    double _raw_startDate;
}

@property (readonly, nonatomic) BOOL stationary;
@property (nonatomic) BOOL hasStationary;
@property (readonly, nonatomic) BOOL walking;
@property (nonatomic) BOOL hasWalking;
@property (readonly, nonatomic) BOOL running;
@property (nonatomic) BOOL hasRunning;
@property (readonly, nonatomic) BOOL automotive;
@property (nonatomic) BOOL hasAutomotive;
@property (readonly, nonatomic) BOOL cycling;
@property (nonatomic) BOOL hasCycling;
@property (readonly, nonatomic) BOOL unknown;
@property (nonatomic) BOOL hasUnknown;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) int confidence;
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
- (BOOL)isEqual:(id)a0;
- (id)initWithStationary:(id)a0 walking:(id)a1 running:(id)a2 automotive:(id)a3 cycling:(id)a4 unknown:(id)a5 startDate:(id)a6 confidence:(int)a7;

@end
