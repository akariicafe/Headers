@class TIContactCollection, NSUUID, NSString, NSMutableArray;

@interface TIContactManagerMock : NSObject <TIContactManaging> {
    TIContactCollection *_contactCollection;
}

@property (readonly, nonatomic) NSMutableArray *observers;
@property (readonly, copy, nonatomic) NSUUID *contactCollectionUUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)unload;
- (void)removeContactObserver:(id /* block */)a0;
- (void)getOnce:(id /* block */)a0;
- (void)keyboardActivityDidTransition:(id)a0;
- (void).cxx_destruct;
- (id /* block */)addContactObserver:(id /* block */)a0;
- (id)initWithContactCollection:(id)a0;

@end
