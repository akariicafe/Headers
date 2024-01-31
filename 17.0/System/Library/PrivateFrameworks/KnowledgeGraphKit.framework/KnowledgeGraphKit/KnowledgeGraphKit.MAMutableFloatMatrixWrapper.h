@interface KnowledgeGraphKit.MAMutableFloatMatrixWrapper : KnowledgeGraphKit.MAFloatMatrixWrapper

- (void)subtract:(id)a0;
- (id)copyWithZone:(void *)a0;
- (void)appendRow:(id)a0;
- (void)subtractScalar:(float)a0;
- (void)addScalar:(float)a0;
- (void)setFloat:(float)a0 atRow:(long long)a1 column:(long long)a2;
- (id)init;
- (id)initWithRows:(id)a0;

@end
