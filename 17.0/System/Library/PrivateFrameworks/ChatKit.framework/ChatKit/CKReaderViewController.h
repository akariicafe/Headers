@class NSString, UITextView, NSAttributedString;
@protocol CKReaderViewControllerDelegate;

@interface CKReaderViewController : UIViewController <UIWebViewDelegate>

@property (retain, nonatomic) UITextView *textView;
@property (nonatomic, getter=isScrollPositionRestored) BOOL scrollPositionRestored;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } textRangeToRestore;
@property (weak, nonatomic) id<CKReaderViewControllerDelegate> delegate;
@property (copy, nonatomic) NSString *messageGUID;
@property (copy, nonatomic) NSAttributedString *text;
@property (nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } visibleRange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)readerScrollPositionCache;
+ (id)readerViewControllerForAudioChatItem:(id)a0;
+ (id)readerViewControllerForChatItem:(id)a0;

- (BOOL)shouldAutorotate;
- (id)init;
- (void)dealloc;
- (void)contentSizeCategoryDidChange:(id)a0;
- (void)loadView;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillDisappear:(BOOL)a0;
- (void)setText:(id)a0;
- (void).cxx_destruct;
- (id)text;
- (void)viewDidAppear:(BOOL)a0;
- (void)_restoreScrollPositionIfNeeded;
- (void)setVisibleRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })visibleRange;

@end
