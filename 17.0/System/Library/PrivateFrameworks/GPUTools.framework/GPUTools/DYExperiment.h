@class NSString, NSMutableDictionary;

@interface DYExperiment : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, retain, nonatomic) NSMutableDictionary *results;
@property (nonatomic) unsigned int repeatCount;
@property (nonatomic) unsigned int warmupCount;
@property (nonatomic) BOOL enabled;
@property (readonly, nonatomic) NSString *name;
@property (nonatomic) BOOL enableExperimentFinish;
@property (nonatomic) BOOL enablePerFrameTiming;
@property (readonly, retain, nonatomic) NSString *captureArchivePath;
@property (nonatomic) int traceMode;
@property (nonatomic) unsigned long long profilingFlags;
@property (nonatomic) unsigned int frameTimeArraySize;
@property (nonatomic) unsigned int frameTimeVariationArraySize;
@property (nonatomic) double frameTimeVariationLimit1;
@property (nonatomic) double frameTimeVariationLimit2;
@property (nonatomic) double frameTimeVariationRangeMax;
@property (nonatomic) BOOL allowEarlyTermination;
@property (copy, nonatomic) id /* block */ messageHandler;
@property (nonatomic) BOOL usingModifiedArchive;

+ (void)initialize;

- (id)init;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithName:(id)a0 results:(id)a1;
- (BOOL)isPresentFrameEnabled;

@end
