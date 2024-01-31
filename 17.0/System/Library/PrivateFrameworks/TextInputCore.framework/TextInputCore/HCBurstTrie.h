@interface HCBurstTrie : NSObject

@property (nonatomic) struct _CFBurstTrie { } *burstTrie;
@property (readonly, nonatomic) unsigned long long keysAdded;

+ (id)burstTrieFromFile:(id)a0;

- (id)init;
- (void)dealloc;
- (unsigned long long)count;
- (BOOL)writeToFile:(id)a0;
- (void)_createUnderlyingBurstTrie;
- (id)payloadForKey:(id)a0;

@end
