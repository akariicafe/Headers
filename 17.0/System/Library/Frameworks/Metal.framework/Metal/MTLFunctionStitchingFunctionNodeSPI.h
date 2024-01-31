@interface MTLFunctionStitchingFunctionNodeSPI : MTLFunctionStitchingFunctionNode

@property (nonatomic) BOOL isEarlyReturn;

- (unsigned long long)hash;
- (id)initWithName:(id)a0 arguments:(id)a1 controlDependencies:(id)a2 isEarlyReturn:(BOOL)a3;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
