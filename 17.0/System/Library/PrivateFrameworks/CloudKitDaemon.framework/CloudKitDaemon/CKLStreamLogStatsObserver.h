@class NSMutableDictionary;

@interface CKLStreamLogStatsObserver : CKLStreamObserver

@property (retain) NSMutableDictionary *totalSizeByLine;
@property (retain) NSMutableDictionary *totalCountByLine;

- (void)finish;
- (void).cxx_destruct;
- (void)eventMatched:(id)a0;
- (id)initWithLogTypes:(unsigned long long)a0;

@end
