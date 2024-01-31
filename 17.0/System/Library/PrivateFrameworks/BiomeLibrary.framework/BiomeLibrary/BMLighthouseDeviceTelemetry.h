@class NSString, NSDate;

@interface BMLighthouseDeviceTelemetry : BMEventBase <BMStoreData> {
    BOOL _hasRaw_bucketStart;
    double _raw_bucketStart;
    BOOL _hasRaw_bucketEnd;
    double _raw_bucketEnd;
}

@property (readonly, nonatomic) int version;
@property (nonatomic) BOOL hasVersion;
@property (readonly, nonatomic) NSDate *bucketStart;
@property (readonly, nonatomic) NSDate *bucketEnd;
@property (readonly, nonatomic) int tasksCount;
@property (nonatomic) BOOL hasTasksCount;
@property (readonly, nonatomic) int tasksRun;
@property (nonatomic) BOOL hasTasksRun;
@property (readonly, nonatomic) int tasksDeferred;
@property (nonatomic) BOOL hasTasksDeferred;
@property (readonly, nonatomic) int tasksFailed;
@property (nonatomic) BOOL hasTasksFailed;
@property (readonly, nonatomic) int tasksCompleted;
@property (nonatomic) BOOL hasTasksCompleted;
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
- (id)initWithVersion:(id)a0 bucketStart:(id)a1 bucketEnd:(id)a2 tasksCount:(id)a3 tasksRun:(id)a4 tasksDeferred:(id)a5 tasksFailed:(id)a6 tasksCompleted:(id)a7;

@end
