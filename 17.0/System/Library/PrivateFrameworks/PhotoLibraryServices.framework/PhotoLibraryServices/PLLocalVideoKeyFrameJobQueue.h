@class NSMutableDictionary, NSMutableOrderedSet;

@interface PLLocalVideoKeyFrameJobQueue : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableOrderedSet *_queuedJobs;
    NSMutableDictionary *_jobsByAssetObjectID;
    unsigned long long _inflightCount;
}

- (id)init;
- (BOOL)removeJob:(id)a0;
- (void).cxx_destruct;
- (id)popNextJobToRun;
- (BOOL)addJobWithAssetObjectID:(id)a0 networkAccessAllowed:(BOOL)a1 libraryID:(id)a2 error:(id *)a3 completionHandler:(id /* block */)a4;

@end
