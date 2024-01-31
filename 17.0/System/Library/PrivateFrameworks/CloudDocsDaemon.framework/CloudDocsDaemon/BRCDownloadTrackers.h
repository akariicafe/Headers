@class BRCAccountSession, NSMutableDictionary, NSMapTable;

@interface BRCDownloadTrackers : NSObject {
    NSMutableDictionary *_trackersByFileObjectID;
    NSMapTable *_fileObjectIDsByTracker;
}

@property (readonly, weak, nonatomic) BRCAccountSession *session;

- (id)initWithSession:(id)a0;
- (void).cxx_destruct;
- (void)addDownloadTracker:(id)a0 forFileObjectID:(id)a1 withEtagIfLoser:(id)a2;
- (void)document:(id)a0 didCompleteDownloadWithError:(id)a1;
- (BOOL)hasPendingTrackerForFileObjectID:(id)a0;
- (void)removeDownloadTracker:(id)a0;
- (unsigned long long)spaceRequiredForTrackers;
- (id)trackedFileObjectIDs;

@end
