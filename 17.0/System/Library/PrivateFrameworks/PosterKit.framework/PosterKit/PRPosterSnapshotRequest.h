@class PRPosterSnapshotLegibilityProcessingRequest, NSUUID, PRSPosterPath, NSString, NSDate, PRPosterSceneSettings, NSArray;

@interface PRPosterSnapshotRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *uniqueIdentifier;
@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) PRSPosterPath *path;
@property (readonly, nonatomic) PRPosterSceneSettings *settings;
@property (readonly, nonatomic) NSString *provider;
@property (readonly, nonatomic) NSArray *snapshotLevelSets;
@property (readonly, nonatomic) PRPosterSnapshotLegibilityProcessingRequest *legibilityProcessingRequest;
@property (readonly, nonatomic) long long priority;
@property (readonly, nonatomic) unsigned long long output;
@property (readonly, nonatomic) double timeoutInterval;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithPath:(id)a0 settings:(id)a1 output:(unsigned long long)a2 priority:(long long)a3 snapshotLevelSets:(id)a4 snapshotLegibilityProcessingRequest:(id)a5 timeout:(double)a6;

@end
