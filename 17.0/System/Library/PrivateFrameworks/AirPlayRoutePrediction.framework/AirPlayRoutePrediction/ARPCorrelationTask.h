@class NSString;
@protocol _DKKnowledgeQuerying;

@interface ARPCorrelationTask : NSObject

@property (readonly, copy, nonatomic) NSString *file;
@property (readonly, nonatomic) id<_DKKnowledgeQuerying> knowledgeStore;

- (void)execute;
- (void).cxx_destruct;
- (void)execute:(id)a0 microLocationEvents:(id)a1;
- (id)initWithCorrelationsFile:(id)a0 knowledgeStore:(id)a1;
- (id)longFormVideoAppBundleIDs;
- (id)queryForMicroLocationsFromStartTime:(id)a0 endTime:(id)a1 maxEvents:(unsigned long long)a2 overlappingNowPlayingEvents:(id)a3;

@end
