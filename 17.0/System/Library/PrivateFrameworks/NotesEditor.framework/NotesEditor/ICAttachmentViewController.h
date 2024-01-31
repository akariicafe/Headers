@class NSTextLayoutManager, ICTextAttachment, NSString, NSLayoutManager, ICAttachment;

@interface ICAttachmentViewController : ICAbstractAttachmentViewController <ICAttachmentViewControllerInitializing>

@property (nonatomic) BOOL forManualRendering;
@property (readonly, weak, nonatomic) NSLayoutManager *layoutManager;
@property (readonly, weak, nonatomic) NSTextLayoutManager *textLayoutManager;
@property (readonly, weak, nonatomic) ICAttachment *attachment;
@property (weak, nonatomic) ICTextAttachment *textAttachment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadView;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithTextAttachment:(id)a0 forManualRendering:(BOOL)a1;
- (id)initWithTextAttachment:(id)a0 forManualRendering:(BOOL)a1 layoutManager:(id)a2;
- (id)initWithTextAttachment:(id)a0 forManualRendering:(BOOL)a1 textLayoutManager:(id)a2;

@end
