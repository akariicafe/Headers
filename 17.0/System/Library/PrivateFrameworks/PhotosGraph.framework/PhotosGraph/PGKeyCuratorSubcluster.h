@protocol CLSInvestigationItem;

@interface PGKeyCuratorSubcluster : NSObject

@property (readonly) id<CLSInvestigationItem> keyItem;
@property (readonly) double score;
@property (readonly) unsigned long long iconicScoreBucket;

- (void).cxx_destruct;
- (id)initWithItems:(id)a0 keyItem:(id)a1 score:(double)a2 iconicScoreBucket:(unsigned long long)a3;

@end
