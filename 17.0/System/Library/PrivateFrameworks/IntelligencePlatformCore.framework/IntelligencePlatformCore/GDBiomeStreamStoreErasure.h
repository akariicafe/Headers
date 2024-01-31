@interface GDBiomeStreamStoreErasure : NSObject

+ (id)_createOrLookupStreamWithIdentifier:(id)a0;
+ (id)_streamWithIdentifier:(id)a0 error:(id *)a1;
+ (id)deletedEventTimestampsForStream:(id)a0 error:(id *)a1;
+ (id)iterateStream:(id)a0 bookmark:(id)a1 startTime:(id)a2 endTime:(id)a3 maxEvents:(id)a4 lastN:(id)a5 reversed:(BOOL)a6 body:(id /* block */)a7;
+ (void)pruneStream:(id)a0 withReason:(unsigned long long)a1;
+ (id)publisherForStream:(id)a0 startTime:(id)a1 endTime:(id)a2 maxEvents:(id)a3 lastN:(id)a4 reversed:(BOOL)a5;
+ (BOOL)registerForStream:(id)a0 sourceIdentifier:(id)a1 callback:(id /* block */)a2;
+ (BOOL)validateBookmark:(id)a0 publisher:(id)a1 error:(id *)a2;

@end
