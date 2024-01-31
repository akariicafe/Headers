@interface ICChangeDatesActivity : UIActivity

@property (retain, nonatomic) id representedObject;
@property (nonatomic) unsigned char type;

+ (long long)activityCategory;

- (id)activityType;
- (id)activityTitle;
- (void).cxx_destruct;
- (id)activityViewController;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (id)initWithObject:(id)a0 activityType:(unsigned char)a1;
- (void)setCreationDateForAttachmentObject:(id)a0;
- (void)setCreationDateForNoteObject:(id)a0;
- (void)setModificationDateForAttachmentObject:(id)a0;
- (void)setModificationDateForNoteObject:(id)a0;

@end
