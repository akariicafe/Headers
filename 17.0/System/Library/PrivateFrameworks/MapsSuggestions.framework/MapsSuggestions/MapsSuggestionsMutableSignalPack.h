@interface MapsSuggestionsMutableSignalPack : MapsSuggestionsSignalPack <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;


- (void)removeAll;
- (BOOL)writeSignalValue:(float)a0 forType:(long long)a1 gathered:(id)a2;
- (BOOL)writeSignalValue:(float)a0 forType:(long long)a1 gathered:(id)a2 expires:(id)a3;
- (id)initWithCapacity:(unsigned long long)a0;
- (BOOL)addFromMapItem:(id)a0;
- (BOOL)addFromEntry:(id)a0;
- (id)copy;
- (BOOL)removeSignalType:(long long)a0;
- (BOOL)writeSignalValue:(float)a0 forType:(long long)a1;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;

@end
