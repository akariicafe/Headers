@class ICTTTextStorage, ICTodoButton, ICTK2TextView, ICNAEventReporter, ICTextController, ICTK2TodoTextAttachment;

@interface ICTK2TodoTextAttachmentViewProvider : ICTK2TextAttachmentViewProvider

@property (readonly, nonatomic) ICTK2TextView *textView;
@property (retain, nonatomic) ICNAEventReporter *eventReporter;
@property (readonly, nonatomic) ICTodoButton *todoButton;
@property (readonly, nonatomic) ICTK2TodoTextAttachment *todoTextAttachment;
@property (readonly, nonatomic) ICTextController *textController;
@property (readonly, nonatomic) ICTTTextStorage *textStorage;

- (void)dealloc;
- (void)loadView;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)eventReporterLostSession:(id)a0;
- (void)didPressTodoButton:(id)a0;
- (BOOL)selectedRangesIntersectWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;

@end
