@interface WRTimestampAndThread : NSObject

@property (readonly) unsigned long long machContTimeNs;
@property (readonly) unsigned long long threadID;

- (id)initWithThreadID:(unsigned long long)a0 machContTimeNs:(unsigned long long)a1;

@end
