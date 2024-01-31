@protocol _SFActivityDelegate;

@interface _SFActivity : UIActivity

@property (weak, nonatomic) id<_SFActivityDelegate> delegate;

- (void).cxx_destruct;
- (void)activityDidFinish:(BOOL)a0;

@end
