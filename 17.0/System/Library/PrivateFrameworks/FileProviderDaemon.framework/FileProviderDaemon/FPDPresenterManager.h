@class NSMutableDictionary, FPDFilePresenter, FPDExtensionManager, NSObject;
@protocol OS_dispatch_queue;

@interface FPDPresenterManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_promisedPresenters;
    unsigned long long nextPromiseID;
    FPDExtensionManager *_extensionManager;
    FPDFilePresenter *_frontmostPresenter;
}

@property (readonly, nonatomic) NSMutableDictionary *presenters;

- (void)noteItemBecameFrontmost:(id)a0 inWindow:(id)a1 completionHandler:(id /* block */)a2;
- (void)forgetPromiseForPresenterWithID:(id)a0 promiseID:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)signalPresentersForItemID:(id)a0;
- (void)addPresenter:(id)a0 itemID:(id)a1 urlHint:(id)a2 pid:(int)a3 promiseID:(unsigned long long)a4;
- (unsigned long long)promisePresenterWithID:(id)a0;
- (id)initWithExtensionManager:(id)a0;
- (id)presentersForDomain:(id)a0;
- (void)removePresenter:(id)a0;

@end
