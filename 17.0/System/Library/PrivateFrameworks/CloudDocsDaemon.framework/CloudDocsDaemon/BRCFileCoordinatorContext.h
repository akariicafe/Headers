@class NSObject, brc_task_tracker;
@protocol OS_dispatch_queue;

@interface BRCFileCoordinatorContext : NSObject

@property (retain, nonatomic) brc_task_tracker *tracker;
@property (nonatomic) struct { unsigned long long sectionID; char *function; int line; } sections;
@property (nonatomic) int startTracingCode;
@property (nonatomic) int endTracingCode;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (id)initWithTracker:(id)a0 queue:(id)a1 startCode:(int)a2 endCode:(int)a3;

@end
