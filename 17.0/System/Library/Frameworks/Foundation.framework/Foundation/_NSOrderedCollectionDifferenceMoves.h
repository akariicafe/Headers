@class NSMutableDictionary;

@interface _NSOrderedCollectionDifferenceMoves : NSObject {
    NSMutableDictionary *_removeDict;
    NSMutableDictionary *_insertDict;
    unsigned long long _firstRemove;
}

- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;

@end
