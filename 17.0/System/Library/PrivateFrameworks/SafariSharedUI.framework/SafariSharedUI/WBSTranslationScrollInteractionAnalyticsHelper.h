@class NSDate;

@interface WBSTranslationScrollInteractionAnalyticsHelper : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _synchronousIvarLock;
    NSDate *_translationStartTime;
    double _firstInteractionDelayFromTranslation;
    BOOL _webViewHasInteraction;
    double _maxVisibleHeightPercentage;
}

@property (copy, nonatomic) id /* block */ submissionHandler;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_calculateFirstInteractionDelayAndMaxPercentageWithCompletion:(id /* block */)a0;
- (void)recordFirstInteractionIfNeeded;
- (void)updateMaxVisibleHeightPercentage:(double)a0;

@end
