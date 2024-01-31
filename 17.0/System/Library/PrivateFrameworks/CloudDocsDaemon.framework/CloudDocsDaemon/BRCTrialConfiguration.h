@class NSString;

@interface BRCTrialConfiguration : NSObject

@property (readonly, nonatomic) NSString *factorPackId;
@property (readonly, nonatomic) NSString *rolloutId;
@property (readonly, nonatomic) NSString *rampId;
@property (readonly, nonatomic) long long maxFailurePerVersion;
@property (readonly, nonatomic) long long percentBelow1k;
@property (readonly, nonatomic) long long percentBelow10k;
@property (readonly, nonatomic) long long percentBelow100k;
@property (readonly, nonatomic) long long percent100kAndAbove;
@property (readonly, nonatomic) BOOL ignorePercentsOnInternal;
@property (readonly, nonatomic) BOOL enabledForFPFSMigration;
@property (readonly, nonatomic) BOOL ciconiaGatedForFPFSMigration;

+ (id)defaultConfiguration;

- (id)init;
- (BOOL)boolForFactor:(id)a0 client:(id)a1 namespace:(id)a2 byDefault:(BOOL)a3;
- (void)refresh;
- (void).cxx_destruct;
- (long long)longLongForFactor:(id)a0 client:(id)a1 namespace:(id)a2 min:(long long)a3 max:(long long)a4 byDefault:(long long)a5;

@end
