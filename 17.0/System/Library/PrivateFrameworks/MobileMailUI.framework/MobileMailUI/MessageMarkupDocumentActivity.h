@protocol ContentRepresentationHandlingDelegate;

@interface MessageMarkupDocumentActivity : UIActivity

@property (weak, nonatomic) id<ContentRepresentationHandlingDelegate> delegate;
@property (nonatomic) long long context;

- (id)activityType;
- (id)activityTitle;
- (void).cxx_destruct;
- (id)activityImage;
- (void)performActivity;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (id)initWithAttachmentHandlingDelegate:(id)a0 context:(long long)a1;

@end
