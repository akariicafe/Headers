@protocol ICLinkEditorDelegate, ICLinkMenuDelegate;

@interface ICLinkTextAttachment : ICInlineTextAttachment

@property (weak, nonatomic) id<ICLinkEditorDelegate> linkDelegate;
@property (weak, nonatomic) id<ICLinkMenuDelegate> linkMenuDelegate;

- (void).cxx_destruct;

@end
