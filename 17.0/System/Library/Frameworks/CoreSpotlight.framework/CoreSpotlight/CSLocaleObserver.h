@class NSArray, NSObject, NSLocale;
@protocol OS_dispatch_queue;

@interface CSLocaleObserver : NSObject {
    NSLocale *_currentLocale;
    NSArray *_preferredLanguages;
    BOOL _isCJK;
    NSObject<OS_dispatch_queue> *_queue;
}

- (id)init;
- (void)dealloc;
- (void)update;
- (void).cxx_destruct;
- (void)currentLocaleWithPreferredLanguagesBlock:(id /* block */)a0;

@end
