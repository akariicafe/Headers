@class NSURL;

@interface TranslationUI.SharedTranslations : NSObject <NSFilePresenter> {
    void /* unknown type, empty encoding */ presentedItemURL;
    void /* unknown type, empty encoding */ translations;
    void /* unknown type, empty encoding */ presentedItemChangedAction;
    void /* unknown type, empty encoding */ fileAccessQueue;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ presentedItemOperationQueue;
@property (nonatomic, copy) NSURL *presentedItemURL;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)presentedItemDidChange;

@end
