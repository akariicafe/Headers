@class NSArray, NSUUID, NSString, NSMutableArray;

@interface TIUserDictionaryServerMock : NSObject <TIUserDictionaryServing> {
    NSMutableArray *_observers;
}

@property (retain, nonatomic) NSArray *pairs;
@property (readonly, copy, nonatomic) NSUUID *userDictionaryUUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)removeObserver:(id)a0;
- (void)startServer;
- (void)getPhraseShortcutPairs:(id /* block */)a0;
- (void).cxx_destruct;
- (id)addObserver:(id /* block */)a0;

@end
