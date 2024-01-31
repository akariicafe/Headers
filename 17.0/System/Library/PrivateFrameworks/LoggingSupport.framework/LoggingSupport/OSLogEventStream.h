@class _OSLogIndex, _OSLogCatalogFilter, NSPredicate, OSLogEventSource, NSObject;
@protocol OS_dispatch_queue;

@interface OSLogEventStream : OSLogEventStreamBase

@property (retain, nonatomic) _OSLogIndex *index;
@property (nonatomic) struct _os_timesync_db_s { } *tsdb;
@property (retain, nonatomic) _OSLogCatalogFilter *catalogFilter;
@property (readonly, nonatomic) OSLogEventSource *source;
@property (nonatomic) unsigned long long flags;
@property (copy, nonatomic) NSPredicate *filterPredicate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *target;

- (id)initWithSource:(id)a0;
- (void)dealloc;
- (void)setFilterPredicate:(id)a0;
- (void)_activateStreamFromTimeIntervalSinceLastBoot:(double)a0;
- (void)activateStreamFromPosition:(id)a0;
- (void)activateStreamFromDate:(id)a0 toDate:(id)a1;
- (id)_initWithSource:(id)a0 flags:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)activateStreamFromLastBoot;
- (id)initWithSource:(id)a0 skipNonSignpostFiles:(BOOL)a1;
- (void)_activateStreamInRange:(struct os_timesync_range_s { struct os_trace_uuid_map_s *x0; unsigned long long x1; unsigned long long x2; unsigned char x3[0][16]; } *)a0;
- (void)activateStreamFromDate:(id)a0;
- (void)_foreachIndexFile:(id /* block */)a0;
- (void)_activateStreamFromDate:(id)a0 toDate:(id)a1;

@end
