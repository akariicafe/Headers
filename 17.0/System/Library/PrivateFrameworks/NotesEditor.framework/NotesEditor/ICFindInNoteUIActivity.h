@protocol ICFindInNoteUIActivityDelegate;

@interface ICFindInNoteUIActivity : UIActivity

@property (weak, nonatomic) id<ICFindInNoteUIActivityDelegate> delegate;

- (id)activityType;
- (id)activityTitle;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (id)_systemImageName;
- (void)performActivity;
- (long long)activityCategory;
- (BOOL)canPerformWithActivityItems:(id)a0;

@end
