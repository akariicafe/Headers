@class UITextView, NSString, NSArray, NSMutableDictionary, UITableViewController;
@protocol PXFeedbackFormDelegate;

@interface PXFeedbackFormUIViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UITextViewDelegate> {
    BOOL _userLikedIt;
    BOOL _wantsCustomFeedbackSection;
    BOOL _wantsPositiveFeedbackSection;
    NSArray *_positiveFeedbackKeys;
    NSMutableDictionary *_positiveFeedbackValues;
    NSArray *_negativeFeedbackKeys;
    NSMutableDictionary *_negativeFeedbackValues;
    UITextView *_customFeedbackTextView;
}

@property (retain, nonatomic) UITableViewController *tableViewController;
@property (retain, nonatomic) id<PXFeedbackFormDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)tableView:(id)a0 willSelectRowAtIndexPath:(id)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void)sendFeedback:(id)a0;
- (void).cxx_destruct;
- (void)finishWithSuccess:(BOOL)a0;
- (void)cancelFeedback:(id)a0;
- (long long)_feedbackFormSectionForSectionIndex:(long long)a0;
- (id)_feedbackKeyForIndexPath:(id)a0;
- (void)_handleDoneButtonWasPressedOnCustomFeedbackView;
- (BOOL)_isSelectedRow:(id)a0 inSection:(long long)a1;
- (void)_markCell:(id)a0 asSelected:(BOOL)a1;
- (void)_setSelectionStateForKey:(id)a0 inSection:(long long)a1 to:(BOOL)a2;
- (id)initWithDelegate:(id)a0 positiveKeys:(id)a1 negativeKeys:(id)a2 wantsCustomFeedbackSection:(BOOL)a3;

@end
