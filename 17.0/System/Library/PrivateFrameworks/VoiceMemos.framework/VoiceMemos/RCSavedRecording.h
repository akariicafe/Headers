@class NSString, AVAsset, NSURL, NSDate;

@interface RCSavedRecording : NSManagedObject {
    AVAsset *_avAsset;
    BOOL _pathWasInvalid;
}

@property (nonatomic) long long recordingID;
@property (nonatomic) long long revisionID;
@property (nonatomic) BOOL pendingRestore;
@property (copy, nonatomic) NSString *uniqueID;
@property (copy, nonatomic) NSString *path;
@property (copy, nonatomic) NSDate *date;
@property (readonly, nonatomic) double duration;
@property (readonly, copy, nonatomic) NSURL *url;
@property (copy, nonatomic) NSString *customLabel;

+ (id)fetchLegacyRecordingsForMigrationWithContext:(id)a0;
+ (id)legacyRecordingWithUniqueIDFetchRequest:(id)a0;
+ (void)deleteOrphanedEntityRevisionsWithContext:(id)a0;

- (void)willSave;
- (void)awakeFromInsert;
- (void)awakeFromFetch;
- (id)avAsset;
- (void)setPath:(id)a0;
- (id)path;
- (void).cxx_destruct;
- (id)URIRepresentation;
- (double)duration;
- (void)_validatePath;
- (BOOL)isContentBeingModified;
- (void)setDuration:(double)a0;

@end
