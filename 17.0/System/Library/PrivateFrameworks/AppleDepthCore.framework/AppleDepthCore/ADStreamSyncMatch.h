@class NSMutableArray;

@interface ADStreamSyncMatch : NSObject

@property (retain, nonatomic) NSMutableArray *matchedStreams;

- (void).cxx_destruct;
- (id)matchedObjectsForStream:(unsigned long long)a0;

@end
