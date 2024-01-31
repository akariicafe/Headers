@class UIView;

@interface PKApplicationMessageView_RemovedSubviewContainer : NSObject {
    id /* block */ _commitAnimation;
    id /* block */ _commitCompletion;
    unsigned char _commitFlag;
    int _layoutMode;
    UIView *_view;
    unsigned long long _index;
    unsigned long long _visualIndex;
}

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;

@end
