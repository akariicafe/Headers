@interface PKPhysicsFieldCustomBlock : PKPhysicsField {
    id /* block */ _batchBlock;
    id /* block */ _block;
}

+ (id)fieldWithCustomBatchBlock:(id /* block */)a0;
+ (id)fieldWithCustomBlock:(id /* block */)a0;

- (void).cxx_destruct;
- (id)initWithCustomBatchBlock:(id /* block */)a0;
- (id)initWithCustomBlock:(id /* block */)a0;

@end
