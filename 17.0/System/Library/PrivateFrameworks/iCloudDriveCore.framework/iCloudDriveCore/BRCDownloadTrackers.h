@class NSMapTable, BRCAccountSessionFPFS, NSMutableDictionary;

@interface BRCDownloadTrackers : NSObject {
    NSMutableDictionary *_trackersByFileObjectID;
    NSMapTable *_fileObjectIDsByTracker;
}

@property (readonly, weak, nonatomic) BRCAccountSessionFPFS *session;

- (id)initWithSession:(id)a0;
- (void).cxx_destruct;
- (void)addDownloadTracker:(id)a0 forFileObjectID:(id)a1 withEtagIfLoser:(id)a2;
- (void)removeDownloadTracker:(id)a0;
- (id)trackedFileObjectIDs;
- (void)document:(id)a0 didCompleteDownloadEtagIfLoser:(id)a1 withError:(id)a2;

@end
