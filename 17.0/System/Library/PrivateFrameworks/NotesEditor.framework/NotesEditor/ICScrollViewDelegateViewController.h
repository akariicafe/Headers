@class NotesBackgroundView, NSString, UIScrollView, ICScrollViewKeyboardResizer;

@interface ICScrollViewDelegateViewController : ICNAViewController <UIScrollViewDelegate, ICScrollViewKeyboardResizerDelegate>

@property (retain, nonatomic) ICScrollViewKeyboardResizer *scrollViewResizer;
@property (readonly, nonatomic) NotesBackgroundView *backgroundView;
@property (readonly, nonatomic) UIScrollView *keyboardResizerScrollView;
@property (readonly, nonatomic) UIScrollView *scrollView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (double)consumedBottomAreaForResizer:(id)a0;
- (double)topInsetForResizer:(id)a0;
- (void)setupScrollViewKeyboardResizer;

@end
