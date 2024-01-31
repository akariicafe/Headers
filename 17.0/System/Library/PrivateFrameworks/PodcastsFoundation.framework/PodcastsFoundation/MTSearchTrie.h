@interface MTSearchTrie : NSObject {
    void /* unknown type, empty encoding */ rootNodes;
}

- (id)init;
- (void).cxx_destruct;
- (void)addMatchCandidate:(id)a0;
- (BOOL)checkForMatchesIn:(id)a0;

@end
