@class BRCRelativePath, BRCAppLibrary, NSURL, BRCLocalItem, BRCServerItem, BRCServerZone;

@interface BRCItemToPathLookup : NSObject {
    BRCLocalItem *_item;
    BRCServerItem *_serverItem;
    BRCServerZone *_serverZone;
    BRCRelativePath *_parentPath;
    BRCRelativePath *_matchByFileID;
    BRCRelativePath *_matchByDocumentID;
    BRCRelativePath *_matchByPath;
    unsigned long long _parentFileID;
    BOOL _fileSystemIDMayStillExist;
    BOOL _cleanupFaults;
    struct { unsigned char byFileID : 1; unsigned char byDocumentID : 1; unsigned char byPath : 1; unsigned char parent : 1; } _fetched;
}

@property (readonly, nonatomic) BRCRelativePath *byFileSystemID;
@property (readonly, nonatomic) BOOL fileSystemIDMayStillExist;
@property (readonly, nonatomic) BRCRelativePath *parentPath;
@property (readonly, nonatomic) BRCRelativePath *byPath;
@property (readonly, nonatomic) NSURL *coordinatedWriteURL;
@property (readonly, nonatomic) NSURL *coordinatedReadURL;
@property (readonly, nonatomic) BRCAppLibrary *coordinatedURLAppLibrary;

+ (id)lookupForItem:(id)a0;
+ (id)lookupForServerItem:(id)a0 cleanupFaults:(BOOL)a1;

- (void)dealloc;
- (BOOL)_fetchByPath;
- (id)description;
- (void).cxx_destruct;
- (void)closePaths;
- (id)initWithItem:(id)a0;
- (BOOL)_fetchByDocumentID;
- (BOOL)_fetchByFileID;
- (void)_fetchParent;
- (BOOL)computeLogicalPath:(id *)a0 physicalPath:(id *)a1 isDirectory:(BOOL *)a2;
- (id)initWithServerItem:(id)a0 cleanupFaults:(BOOL)a1;

@end
