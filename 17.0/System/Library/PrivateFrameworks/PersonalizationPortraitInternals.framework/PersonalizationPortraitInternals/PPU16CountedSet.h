@class NSMutableDictionary;

@interface PPU16CountedSet : NSObject {
    void *_vectorStorage;
    NSMutableDictionary *_dictStorage;
    struct type { unsigned char __lx[24]; } _vectorInlineStorage;
}

- (id)init;
- (void)addValue:(unsigned short)a0;
- (void)dealloc;
- (id)initWithCapacity:(unsigned long long)a0;
- (id)dictionary;
- (void)enumerateValuesAndCountsUsingBlock:(id /* block */)a0;
- (unsigned long long)uniqueValueCount;
- (id)description;
- (unsigned short)countForValue:(unsigned short)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
