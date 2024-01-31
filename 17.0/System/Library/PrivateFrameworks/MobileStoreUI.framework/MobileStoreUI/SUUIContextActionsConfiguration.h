@class SUUIContextActionsPresentationSource, SUUIDialogTemplateViewElement;

@interface SUUIContextActionsConfiguration : NSObject

@property (retain, nonatomic) SUUIDialogTemplateViewElement *dialogTemplate;
@property (retain, nonatomic) SUUIContextActionsPresentationSource *presentationSource;

- (void).cxx_destruct;
- (id)_resourceImageForImageElement:(id)a0;
- (id)contextActions;
- (id)initWithDialogTemplate:(id)a0;

@end
