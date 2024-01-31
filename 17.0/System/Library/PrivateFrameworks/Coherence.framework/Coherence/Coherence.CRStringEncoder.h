@interface Coherence.CRStringEncoder : NSObject {
    void /* unknown type, empty encoding */ sequence;
    void /* unknown type, empty encoding */ subsequence;
    void /* unknown type, empty encoding */ encoder;
}

- (id)init;
- (void).cxx_destruct;
- (void)setFromVersion:(id)a0;
- (void)addChildWithId:(unsigned int)a0;
- (void)finishSubstring;
- (void)setWithVersion:(id)a0;
- (void)addAddedById:(id)a0 clock:(unsigned int)a1;
- (void)addRemovedAddedById:(id)a0 clock:(unsigned int)a1;
- (void)setCharWithId:(id)a0 clock:(unsigned int)a1;
- (void)setFromAddedByVersion:(id)a0;
- (BOOL)setStorage:(id)a0 error:(id *)a1;
- (void)setWithAddedByVersion:(id)a0;
- (void)setWithContentOptions:(long long)a0;
- (void)setWithLength:(unsigned int)a0;

@end
