@interface SGEKEventStoreProvider : NSObject {
    id /* block */ _newEKEventStoreGetter;
    id /* block */ _callBlockWithEKEventStoreForReading;
}

+ (id)defaultEKStoreProvider;

- (id)initWithNewEKEventStoreGetter:(id /* block */)a0 callBlockWithEKEventStoreForReading:(id /* block */)a1;
- (void).cxx_destruct;

@end
