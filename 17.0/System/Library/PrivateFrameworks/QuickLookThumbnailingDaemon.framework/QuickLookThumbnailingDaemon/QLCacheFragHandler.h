@class NSArray, NSString, _QLCacheThread, NSMutableArray;

@interface QLCacheFragHandler : NSObject {
    unsigned long long _totalLen;
    unsigned long long _holesLen;
    NSArray *_sizeRanks;
    NSMutableArray *_orderedByStart;
    NSString *_path;
    BOOL _isDirty;
    BOOL _needsCompact;
}

@property (weak) _QLCacheThread *cacheThread;

+ (void)initialize;

- (void)compact;
- (void)clear;
- (float)frag;
- (void)releaseSpaceAtPos:(unsigned long long)a0 withLen:(unsigned long long)a1;
- (void)_removeHoleFromRanks:(id)a0;
- (void)assertSpaceIsRetainedAtPos:(unsigned long long)a0 withLen:(unsigned long long)a1;
- (BOOL)isDirty;
- (BOOL)checkHolesLenConsistency;
- (void)truncateFromPosition:(unsigned long long)a0;
- (BOOL)checkConsistency;
- (void)truncateUselessSpaceAtEndOfFile;
- (unsigned long long)totalLen;
- (BOOL)save;
- (void).cxx_destruct;
- (unsigned long long)allocateSpaceForLength:(unsigned long long)a0 added:(BOOL *)a1;
- (id)lastHole;
- (id)initWithFilePath:(id)a0 cacheThread:(id)a1;
- (id)initWithHolePositions:(id)a0 holeLengths:(id)a1 totalLength:(long long)a2 holesLength:(long long)a3 cacheThread:(id)a4;
- (id)initWithCacheThread:(id)a0;
- (BOOL)canFindHoleForLen:(unsigned long long)a0;
- (void)_insertHoleInRanks:(id)a0;
- (id)initWithDictionary:(id)a0 cacheThread:(id)a1;
- (id)dataToSave;
- (id)orderedByStart;

@end
