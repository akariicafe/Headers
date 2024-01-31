@class UIPrintPageRenderer;

@interface MessagePrintQuicklookableAttachmentActivity : UIActivity

@property (retain, nonatomic) UIPrintPageRenderer *pageRenderer;

- (id)activityType;
- (id)activityTitle;
- (void).cxx_destruct;
- (id)activityImage;
- (void)performActivity;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (id)initWithPrintPageRenderer:(id)a0;

@end
