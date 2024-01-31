@class SUUIShareTemplateViewElement, SUUIClientContext;

@interface SUUIShareTemplateTextItemProvider : UIActivityItemProvider {
    SUUIClientContext *_clientContext;
    SUUIShareTemplateViewElement *_templateElement;
}

- (void).cxx_destruct;
- (id)item;
- (id)activityViewController:(id)a0 subjectForActivityType:(id)a1;
- (id)initWithTemplateElement:(id)a0 clientContext:(id)a1;

@end
