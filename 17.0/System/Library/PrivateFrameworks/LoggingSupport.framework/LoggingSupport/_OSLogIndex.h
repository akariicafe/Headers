@class NSString, _OSLogCollectionReference, _OSLogEventStoreMetadata, NSMutableArray;

@interface _OSLogIndex : NSObject {
    NSMutableArray *_fileq;
    _OSLogCollectionReference *_lcr;
    NSString *_file;
    struct { struct _os_log_index_timeref { unsigned char uuid[16]; unsigned long long continuous; } olim_oldestpersist; struct _os_log_index_timeref { unsigned char uuid[16]; unsigned long long continuous; } olim_oldestspecial; struct _os_log_index_timeref { unsigned char uuid[16]; unsigned long long continuous; } olim_oldestsignpost; struct _os_log_index_timeref { unsigned char uuid[16]; unsigned long long continuous; } olim_oldesthighvol; struct _os_log_index_timeref { unsigned char uuid[16]; unsigned long long continuous; } olim_oldestlive; struct _os_log_index_timeref { unsigned char uuid[16]; unsigned long long continuous; } olim_end; struct _os_log_index_timeref *olim_oldest; struct { struct _os_log_index_timeref { unsigned char uuid[16]; unsigned long long continuous; } timeref; unsigned char ttl; } olim_ttl[5]; } _metadata;
    BOOL _metadataValid;
    _OSLogEventStoreMetadata *_metadata2;
}

@property (readonly, nonatomic) struct _os_timesync_db_s { } *timesync;
@property (readonly, nonatomic) unsigned long long persistStartWalltime;
@property (readonly, nonatomic) unsigned long long specialStartWalltime;
@property (readonly, nonatomic) unsigned long long endWalltime;

- (BOOL)_openTimesyncDatabase;
- (id)init;
- (void)enumerateEntriesFromLastBootWithOptions:(unsigned int)a0 usingBlock:(id /* block */)a1;
- (void)dealloc;
- (void)insertIndexFile:(id)a0;
- (BOOL)_addFileToIndex:(const char *)a0 error:(id *)a1;
- (id)initWithCollection:(id)a0 buildLocalIndex:(BOOL)a1;
- (BOOL)_buildFileIndex;
- (BOOL)addReferenceToIndex:(id)a0 error:(id *)a1;
- (void)enumerateEntriesInRange:(struct os_timesync_range_s { struct os_trace_uuid_map_s *x0; unsigned long long x1; unsigned long long x2; unsigned char x3[0][16]; } *)a0 options:(unsigned int)a1 usingCatalogFilter:(id)a2 usingBlock:(id /* block */)a3;
- (id)initWithCollection:(id)a0 timesync:(struct _os_timesync_db_s { } *)a1 metadata:(id)a2;
- (void)enumerateEntriesUsingBlock:(id /* block */)a0;
- (BOOL)_buildSingleFileIndex:(id *)a0;
- (void)enumerateEntriesFrom:(unsigned long long)a0 to:(unsigned long long)a1 options:(unsigned int)a2 usingBlock:(id /* block */)a3;
- (void)insertChunkStore:(id)a0;
- (void)enumerateFilesUsingBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)_enumerateEntriesInRange:(struct os_timesync_range_s { struct os_trace_uuid_map_s *x0; unsigned long long x1; unsigned long long x2; unsigned char x3[0][16]; } *)a0 options:(unsigned int)a1 usingBlock:(id /* block */)a2;
- (BOOL)_readArchiveMetadata:(id *)a0;
- (void)_foreachIndexFile:(id /* block */)a0;

@end
