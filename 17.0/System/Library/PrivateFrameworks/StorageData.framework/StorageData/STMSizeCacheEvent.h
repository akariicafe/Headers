@class NSString;

@interface STMSizeCacheEvent : NSObject

@property (retain) NSString *path;
@property unsigned long long evtID;
@property unsigned int flags;

+ (id)eventWithPath:(id)a0 flags:(unsigned int)a1 event:(unsigned long long)a2;

- (void).cxx_destruct;
- (long long)eventIDCompare:(id)a0;

@end
