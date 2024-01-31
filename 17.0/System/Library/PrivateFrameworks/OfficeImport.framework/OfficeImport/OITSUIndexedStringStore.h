@class NSMutableArray, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface OITSUIndexedStringStore : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableDictionary *_indexByString;
    NSMutableArray *_stringByIndex;
}

- (unsigned long long)indexForString:(id)a0;
- (id)init;
- (void)dealloc;
- (unsigned long long)count;
- (id)stringForIndex:(unsigned long long)a0;

@end
