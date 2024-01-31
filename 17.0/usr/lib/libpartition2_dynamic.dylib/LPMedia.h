@class NSDictionary, NSArray;

@interface LPMedia : NSObject

@property (class, readonly) NSDictionary *contentTypeToSubclassMap;
@property (class, readonly) NSArray *supportedContentTypes;
@property (class, readonly) BOOL hasEmbeddedDeviceTypeRoot;

@property unsigned int ioMedia;

+ (id)allMedia;
+ (unsigned int)_copyIOMediaForDiskWithPath:(id)a0;
+ (id)mediaOfCorrectTypeGivenIOMedia:(unsigned int)a0;
+ (unsigned int)_copyLiveFilesystemIOMediaForRootedSnapshot;
+ (id)liveMediaForSnapshotAtPath:(id)a0;
+ (id)mediaForBSDNameOrDeviceNode:(id)a0;
+ (id)mediaForPath:(id)a0;
+ (id)mediaForPath:(id)a0 isSnapshot:(BOOL *)a1;
+ (id)mediaForPath:(id)a0 snapshotName:(id *)a1;
+ (id)mediaForUUID:(id)a0;
+ (id)snapshotNameForMediaForPath:(id)a0;
+ (void)waitForBlockStorage;
+ (void)waitForIOMediaWithDevNode:(id)a0;

- (BOOL)isReadOnly;
- (void)dealloc;
- (id)content;
- (BOOL)isInternal;
- (id)description;
- (id)name;
- (id)mountPoint;
- (BOOL)isEqual:(id)a0;
- (id)mediaUUID;
- (BOOL)isJournaled;
- (id)BSDName;
- (BOOL)isWhole;
- (id)devNodePath;
- (BOOL)getBoolPropertyWithName:(id)a0;
- (id)getPropertyWithName:(id)a0;
- (id)getStringPropertyWithName:(id)a0;
- (id)initWithIOMediaObject:(unsigned int)a0;
- (BOOL)isEmbeddedDeviceTypeRoot;
- (BOOL)isPrimaryMedia;
- (BOOL)setName:(id)a0 withError:(id *)a1;
- (id)wholeMediaForMedia;

@end
