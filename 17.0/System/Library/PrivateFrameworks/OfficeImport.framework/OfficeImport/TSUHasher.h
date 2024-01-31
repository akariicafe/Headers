@interface TSUHasher : NSObject

@property (nonatomic) unsigned long long currentHash;

- (id)init;
- (unsigned long long)hashValue;
- (void)addObject:(id)a0;
- (void)addInteger:(long long)a0;
- (void)addBool:(BOOL)a0;
- (void)addUnsignedInteger:(unsigned long long)a0;
- (void)addInt:(int)a0;
- (void)addUnsignedInt:(unsigned int)a0;
- (void)p_appendUnsignedInteger:(unsigned long long)a0;

@end
