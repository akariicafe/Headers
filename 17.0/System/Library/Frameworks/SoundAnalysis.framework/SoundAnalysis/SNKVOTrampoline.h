@interface SNKVOTrampoline : NSObject {
    void /* unknown type, empty encoding */ observeValue;
}

@property (nonatomic, copy) id /* block */ observeValue;

- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;

@end
