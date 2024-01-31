@interface TSPersistence.TSPMutableIdentifierSet : NSObject {
    void /* unknown type, empty encoding */ identifierSet;
}

@property (nonatomic, readonly) long long count;
@property (nonatomic, readonly) long long hash;

- (id)init;
- (id)initWithCapacity:(long long)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)enumerateIdentifiersUsingBlock:(id /* block */)a0;
- (long long)incrementCountBy:(long long)a0 forIdentifier:(long long)a1;
- (long long)countForIdentifier:(long long)a0 default:(long long)a1;
- (id)makeIdentifierSet;
- (void)mergeWithIdentifierSet:(id)a0;
- (long long)setCount:(long long)a0 forIdentifier:(long long)a1;

@end
