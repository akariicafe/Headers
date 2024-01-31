@class NSMutableDictionary;

@interface STMutableSizeDict : STSizeDict {
    NSMutableDictionary *_mutableDictionary;
}

- (id)init;
- (BOOL)hasKey:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (void)setSize:(id)a0 forKey:(id)a1;
- (void)addSize:(id)a0 toKey:(id)a1;
- (void)plusEquals:(id)a0;
- (void)removeSmallerThan:(long long)a0;

@end
