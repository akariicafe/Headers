@class NSURL;
@protocol ContentRepresentationHandlingDelegate;

@interface MessageQuicklookImageAttachmentsActivity : UIActivity

@property (weak, nonatomic) id<ContentRepresentationHandlingDelegate> delegate;
@property (retain, nonatomic) NSURL *url;

- (void)_cleanup;
- (id)activityType;
- (id)activityTitle;
- (void).cxx_destruct;
- (id)activityImage;
- (void)performActivity;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (id)initWithAttachmentHandlingDelegate:(id)a0 context:(long long)a1 url:(id)a2;

@end
