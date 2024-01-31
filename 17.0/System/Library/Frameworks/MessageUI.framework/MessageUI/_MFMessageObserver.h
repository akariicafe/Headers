@class NSMutableDictionary;

@interface _MFMessageObserver : NSObject {
    NSMutableDictionary *_completionMap;
}

+ (id)sharedObserver;
+ (void)removeCompletionForMessageGUID:(id)a0;
+ (void)invokeCompletionForMessageGUID:(id)a0 didSend:(BOOL)a1;
+ (void)observeMessageGUID:(id)a0 completion:(id /* block */)a1;

- (id)init;
- (void).cxx_destruct;
- (void)removeCompletionForMessageGUID:(id)a0;
- (void)invokeCompletionForMessageGUID:(id)a0 didSend:(BOOL)a1;
- (void)observeMessageGUID:(id)a0 completion:(id /* block */)a1;

@end
