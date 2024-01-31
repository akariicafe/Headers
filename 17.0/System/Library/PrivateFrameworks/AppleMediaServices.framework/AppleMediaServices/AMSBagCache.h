@interface AMSBagCache : NSObject {
    void /* unknown type, empty encoding */ lock;
}

- (void)removeAll;
- (id)init;
- (void).cxx_destruct;
- (id)bagWithIdentifier:(id)a0 accountProviderIdentity:(id)a1 accountMediaType:(id)a2 orCreateUsingBlock:(id /* block */)a3;

@end
