@class NSMutableArray, NSMapTable;

@interface GEODataURLSessionList : NSObject {
    NSMutableArray *_urlSessions;
    NSMutableArray *_lastUsedDates;
    NSMapTable *_pendingInvalidationGroups;
}

@property (readonly, nonatomic) unsigned long long count;

- (id)init;
- (void)URLSession:(id)a0 didBecomeInvalidWithError:(id)a1;
- (id)urlSessionForRequest:(id)a0;
- (void)pruneSessionsNotInIdentifierArray:(id)a0 agressive:(BOOL)a1;
- (void).cxx_destruct;
- (void)finishTasksAndInvalidateSessionsMatching:(id /* block */)a0 group:(id)a1;
- (void)addSession:(id)a0;
- (id)urlSessionForIdentifier:(id)a0;

@end
