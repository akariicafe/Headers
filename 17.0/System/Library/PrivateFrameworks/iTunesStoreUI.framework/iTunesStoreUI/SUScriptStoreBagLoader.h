@class NSString, NSDictionary, NSObject, SUScriptDictionary;
@protocol OS_dispatch_queue;

@interface SUScriptStoreBagLoader : NSObject <ISURLBagObserver> {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSDictionary *_bagDictionary;
    SUScriptDictionary *_scriptStoreBagDictionary;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)bagDidChange:(id)a0;
- (void)_updateWithBagDictionary:(id)a0 allowsPostingBagDidChangeNotification:(BOOL)a1;
- (id)scriptStoreBagDictionary;

@end
