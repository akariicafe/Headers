@class NSObject;
@protocol NSCopying;

@interface PKLRUCacheKey : NSObject <NSCopying> {
    NSObject<NSCopying> *_key;
    long long _scaleFactor;
}

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
