@class NSLock, NSMutableDictionary;

@interface VMUProcList : NSObject {
    NSLock *procLock;
    NSMutableDictionary *allProcs;
    NSMutableDictionary *filteredProcs;
}

- (id)init;
- (BOOL)update;
- (unsigned long long)count;
- (void).cxx_destruct;
- (id)allPIDs;
- (void)removeProcInfo:(id)a0;
- (void)_populateFromSystem;
- (void)addProcInfo:(id)a0;
- (id)allNames;
- (id)allPathNames;
- (id)allProcInfos;
- (id)newestProcInfo;
- (id)newestProcInfoWithName:(id)a0;
- (id)procInfoWithPID:(int)a0;
- (void)setProcInfos:(id)a0;
- (BOOL)updateFromSystem;

@end
