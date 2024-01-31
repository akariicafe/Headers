@class LiveFSVolume, NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface LiveFSServiceConnection : NSObject <LiveFSVolumeCore, NSFileProviderLiveItemCore, LiveFSConnectorMaker> {
    LiveFSVolume *mount;
    NSXPCConnection *ourConnection;
    NSObject<OS_dispatch_queue> *setUpdateInterestQueue;
}

@property (readonly) unsigned long long ourID;

+ (id)newConnectionForMount:(id)a0 connection:(id)a1 error:(id *)a2;
+ (id)newExportObjectForObject:(id)a0 connection:(id)a1 error:(id *)a2;

- (void)dealloc;
- (void)connectionWasInvalidated;
- (void).cxx_destruct;
- (void)connectionWasInterrupted;
- (void)getRootFileHandleWithError:(id /* block */)a0;
- (void)otherAttributeOf:(id)a0 named:(id)a1 requestID:(unsigned long long)a2 reply:(id /* block */)a3;
- (void)fileAttributes:(id)a0 requestID:(unsigned long long)a1 reply:(id /* block */)a2;
- (void)lookupIn:(id)a0 name:(id)a1 requestID:(unsigned long long)a2 reply:(id /* block */)a3;
- (void)pathsAndAttributesForItemsByIDs:(id)a0 requestID:(unsigned long long)a1 reply:(id /* block */)a2;
- (void)readDirectory:(id)a0 amount:(unsigned long long)a1 cookie:(unsigned long long)a2 verifier:(unsigned long long)a3 requestID:(unsigned long long)a4 reply:(id /* block */)a5;
- (void)readDirectoryAndAttributes:(id)a0 amount:(unsigned long long)a1 cookie:(unsigned long long)a2 verifier:(unsigned long long)a3 requestID:(unsigned long long)a4 reply:(id /* block */)a5;
- (void)reclaim:(id)a0 requestID:(unsigned long long)a1 reply:(id /* block */)a2;
- (void)search:(id)a0 token:(id)a1 criteria:(id)a2 resumeAt:(id)a3 maxData:(unsigned int)a4 maxDelay:(double)a5 initialCredits:(unsigned int)a6 requestID:(unsigned long long)a7 reply:(id /* block */)a8;
- (void)setUpdateInterest:(id)a0 interest:(BOOL)a1 requestID:(unsigned long long)a2 reply:(id /* block */)a3;
- (void)xattrOf:(id)a0 named:(id)a1 requestID:(unsigned long long)a2 reply:(id /* block */)a3;
- (void)LIGetFsAttr:(id)a0 name:(id)a1 reply:(id /* block */)a2;
- (void)LIGetRootFileHandle:(id /* block */)a0;
- (void)LISearch:(id)a0 token:(id)a1 criteria:(id)a2 resumeAt:(id)a3 maxData:(unsigned int)a4 maxDelay:(double)a5 initialCredits:(unsigned int)a6 reply:(id /* block */)a7;
- (void)LIGetAttr:(id)a0 reply:(id /* block */)a1;
- (void)LIGetParentsAndAttributesForFileIDs:(id)a0 reply:(id /* block */)a1;
- (void)LILookup:(id)a0 name:(id)a1 reply:(id /* block */)a2;
- (void)LISearchAbort:(id)a0 reply:(id /* block */)a1;
- (void)abortSearch:(id)a0 requestID:(unsigned long long)a1 reply:(id /* block */)a2;
- (void)blockmapFile:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 startIO:(int)a2 flags:(unsigned int)a3 operationID:(unsigned long long)a4 reply:(id /* block */)a5;
- (void)checkAccessTo:(id)a0 requestedAccess:(unsigned int)a1 requestID:(unsigned long long)a2 reply:(id /* block */)a3;
- (void)close:(id)a0 keepingMode:(int)a1 requestID:(unsigned long long)a2 reply:(id /* block */)a3;
- (void)createIn:(id)a0 named:(id)a1 attributes:(id)a2 requestID:(unsigned long long)a3 reply:(id /* block */)a4;
- (void)endIO:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 status:(int)a2 flags:(unsigned int)a3 operationID:(unsigned long long)a4 reply:(id /* block */)a5;
- (void)fetchVolumeMachPortLabeled:(id)a0 requestID:(unsigned long long)a1 reply:(id /* block */)a2;
- (id)initForMount:(id)a0 connection:(id)a1 error:(id *)a2;
- (void)listXattrsOf:(id)a0 requestID:(unsigned long long)a1 reply:(id /* block */)a2;
- (void)makeCloneOf:(id)a0 named:(id)a1 inDirectory:(id)a2 attributes:(id)a3 usingFlags:(unsigned int)a4 requestID:(unsigned long long)a5 reply:(id /* block */)a6;
- (void)makeDirectoryIn:(id)a0 named:(id)a1 attributes:(id)a2 requestID:(unsigned long long)a3 reply:(id /* block */)a4;
- (void)makeLinkOf:(id)a0 named:(id)a1 inDirectory:(id)a2 requestID:(unsigned long long)a3 reply:(id /* block */)a4;
- (void)makeSymLinkIn:(id)a0 named:(id)a1 contents:(id)a2 attributes:(id)a3 requestID:(unsigned long long)a4 reply:(id /* block */)a5;
- (void)open:(id)a0 withMode:(int)a1 requestID:(unsigned long long)a2 reply:(id /* block */)a3;
- (void)parentsAndAttributesForItemsByID:(id)a0 requestID:(unsigned long long)a1 reply:(id /* block */)a2;
- (void)pathConfiguration:(id)a0 requestID:(unsigned long long)a1 reply:(id /* block */)a2;
- (void)readDirectory:(id)a0 intoBuffer:(id)a1 cookie:(unsigned long long)a2 verifier:(unsigned long long)a3 requestID:(unsigned long long)a4 reply:(id /* block */)a5;
- (void)readDirectoryAndAttributes:(id)a0 intoBuffer:(id)a1 cookie:(unsigned long long)a2 verifier:(unsigned long long)a3 requestID:(unsigned long long)a4 reply:(id /* block */)a5;
- (void)readFrom:(id)a0 atOffset:(unsigned long long)a1 intoBuffer:(id)a2 requestID:(unsigned long long)a3 reply:(id /* block */)a4;
- (void)readFrom:(id)a0 length:(unsigned long long)a1 atOffset:(unsigned long long)a2 requestID:(unsigned long long)a3 reply:(id /* block */)a4;
- (void)readLinkOf:(id)a0 requestID:(unsigned long long)a1 reply:(id /* block */)a2;
- (void)removeDirectory:(id)a0 from:(id)a1 named:(id)a2 usingFlags:(int)a3 requestID:(unsigned long long)a4 reply:(id /* block */)a5;
- (void)removeItem:(id)a0 from:(id)a1 named:(id)a2 usingFlags:(int)a3 requestID:(unsigned long long)a4 reply:(id /* block */)a5;
- (void)renameItemIn:(id)a0 named:(id)a1 toDirectory:(id)a2 newName:(id)a3 usingFlags:(unsigned int)a4 requestID:(unsigned long long)a5 reply:(id /* block */)a6;
- (void)replenishSearchCreditsFor:(id)a0 credits:(unsigned int)a1 requestID:(unsigned long long)a2 reply:(id /* block */)a3;
- (id)sanitizedAttrsForNewObjectAttrs:(id)a0 forType:(unsigned int)a1;
- (void)scrubOurClientId;
- (void)setFileAttributesOf:(id)a0 to:(id)a1 requestID:(unsigned long long)a2 reply:(id /* block */)a3;
- (void)setOtherAttributeOf:(id)a0 named:(id)a1 value:(id)a2 requestID:(unsigned long long)a3 reply:(id /* block */)a4;
- (void)setXattrOf:(id)a0 named:(id)a1 value:(id)a2 how:(int)a3 requestID:(unsigned long long)a4 reply:(id /* block */)a5;
- (void)verifyItemExistenceByIDs:(id)a0 requestID:(unsigned long long)a1 reply:(id /* block */)a2;
- (void)volumeStatistics:(id)a0 requestID:(unsigned long long)a1 reply:(id /* block */)a2;
- (void)writeTo:(id)a0 atOffset:(unsigned long long)a1 fromBuffer:(id)a2 requestID:(unsigned long long)a3 reply:(id /* block */)a4;
- (void)writeTo:(id)a0 atOffset:(unsigned long long)a1 sharedBuffer:(id)a2 requestID:(unsigned long long)a3 reply:(id /* block */)a4;

@end
