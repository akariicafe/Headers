@class NSArray, NSMutableArray, RCPEventEnvironment;

@interface RCPEventStream : NSObject <NSCopying>

@property (readonly, nonatomic) NSMutableArray *rawEvents;
@property (retain, nonatomic) NSArray *events;
@property (retain, nonatomic) RCPEventEnvironment *environment;

+ (id)eventStreamWithData:(id)a0 error:(id *)a1;
+ (id)eventStreamWithFileURL:(id)a0 error:(id *)a1;
+ (id)eventStreamWithStudyLogFileURL:(id)a0 error:(id *)a1;

- (void)writeToURL:(id)a0;
- (id)dataRepresentation;
- (id)emptyCopy;
- (id)trimmedFrom:(unsigned long long)a0 to:(unsigned long long)a1;
- (id)init;
- (void)enumerateEventsUsingBlock:(id /* block */)a0;
- (void)transformDigitizerEventLocationsWithTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (id)statistics;
- (id)streamByAddingEventsFromStream:(id)a0 withDistance:(double)a1;
- (void).cxx_destruct;
- (void)filterEventsUsingBlock:(id /* block */)a0;
- (void)_addEvent:(id)a0;
- (id)timingStatistics;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
