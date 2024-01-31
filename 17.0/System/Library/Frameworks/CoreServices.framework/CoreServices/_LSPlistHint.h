@class NSSet, NSDictionary;

@interface _LSPlistHint : NSObject <NSCopying> {
    NSSet *_keys;
    NSDictionary *_cachedValues;
    BOOL _cachedValuesAreComplete;
    BOOL _keysAreCompacted;
}

- (void).cxx_destruct;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
