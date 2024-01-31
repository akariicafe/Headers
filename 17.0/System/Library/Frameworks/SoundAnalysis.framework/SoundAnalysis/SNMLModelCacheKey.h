@class NSArray;

@interface SNMLModelCacheKey : NSObject <NSCopying> {
    NSArray *_keys;
}

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
