@class NUIContainerBoxView, SearchUIRowModel, NSString, SearchUICommandButtonItem, SearchUIButtonItemView;
@protocol SearchUIFeedbackDelegate;

@interface SearchUISFButtonItemViewController : UIViewController <SearchUIButtonItemViewDelegate>

@property (retain, nonatomic) SearchUIButtonItemView *buttonItemView;
@property (retain) NUIContainerBoxView *view;
@property (retain, nonatomic) SearchUICommandButtonItem *buttonItem;
@property (nonatomic) unsigned long long buttonItemViewType;
@property (weak, nonatomic) id<SearchUIFeedbackDelegate> feedbackDelegate;
@property (weak, nonatomic) SearchUIRowModel *rowModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)searchUIButtonItemViewClass;

- (id)init;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)buttonPressed;
- (id)previewCommandHandler;
- (void)updateWithButtonItem:(id)a0 buttonItemViewType:(unsigned long long)a1;

@end
