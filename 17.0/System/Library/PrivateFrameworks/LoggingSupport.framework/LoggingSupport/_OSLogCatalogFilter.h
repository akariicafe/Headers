@class NSMutableSet;

@interface _OSLogCatalogFilter : NSObject <NSPredicateVisitor> {
    NSMutableSet *_pidAccept;
    NSMutableSet *_processLookupSubstr;
    NSMutableSet *_senderLookupSubstr;
    NSMutableSet *_subsysSubstrAccept;
    NSMutableSet *_uuidAccept;
    char *_uuidtext_path;
    BOOL _hasItems;
    BOOL _hasSharedCacheItems;
}

- (void)dealloc;
- (BOOL)containsProcessID:(id)a0;
- (void)readDSOUUIDs;
- (void)handleDSOFile:(struct _ftsent { struct _ftsent *x0; struct _ftsent *x1; struct _ftsent *x2; long long x3; void *x4; char *x5; char *x6; int x7; int x8; unsigned short x9; unsigned short x10; unsigned long long x11; int x12; unsigned short x13; short x14; unsigned short x15; unsigned short x16; unsigned short x17; struct stat *x18; char x19[1]; } *)a0;
- (void)readDSCUUIDs;
- (void)addProcessLookupSubstr:(id)a0;
- (void)visitPredicate:(id)a0;
- (void)processComparisonPredicate:(id)a0;
- (BOOL)isKeptCatalog:(struct catalog_s { struct catalog_hdr_s { unsigned short x0; unsigned long long x1; } x0; struct os_trace_uuid_map_s *x1; struct os_trace_str_map_s *x2; unsigned long long x3; struct os_procinfo_map_s *x4; unsigned long long x5; unsigned long long x6; struct subchunk_queue_t { struct catalog_subchunk_s *x0; struct catalog_subchunk_s **x1; } x7; unsigned long long x8; } *)a0;
- (void)addSenderLookupSubstr:(id)a0;
- (BOOL)containsProcessLookupSubstr:(id)a0;
- (void)addSubsystem:(id)a0;
- (id)initWithPredicate:(id)a0 collection:(id)a1;
- (void)visitPredicateExpression:(id)a0;
- (void).cxx_destruct;
- (void)processLeftExpression:(id)a0 andRightExpression:(id)a1;
- (BOOL)containsSubsystemSubstr:(id)a0;
- (BOOL)containsSenderLookupSubstr:(id)a0;
- (void)generateUUIDSet;
- (BOOL)containsUUID:(id)a0;
- (void)addProcessID:(id)a0;
- (void)visitPredicateOperator:(id)a0;
- (void)addUUID:(id)a0;

@end
