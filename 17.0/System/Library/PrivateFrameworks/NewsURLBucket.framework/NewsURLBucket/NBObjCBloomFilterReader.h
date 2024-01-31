@interface NBObjCBloomFilterReader : NSObject {
    void /* unknown type, empty encoding */ bloomFilterReader;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithData:(id)a0 hashFunctionCount:(long long)a1;
- (BOOL)maybeContainsString:(id)a0;

@end
