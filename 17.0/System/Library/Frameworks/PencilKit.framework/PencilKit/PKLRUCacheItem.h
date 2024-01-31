@class NSObject;
@protocol NSCopying;

@interface PKLRUCacheItem : NSObject {
    NSObject<NSCopying> *_key;
    long long _scaleFactor;
    PKLRUCacheItem *_next;
    PKLRUCacheItem *_prev;
    id _object;
    unsigned long long _cost;
}

- (void).cxx_destruct;

@end
