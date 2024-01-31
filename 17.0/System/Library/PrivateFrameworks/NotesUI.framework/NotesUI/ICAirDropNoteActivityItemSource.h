@class NSString;

@interface ICAirDropNoteActivityItemSource : ICNoteBaseActivityItemSource <UIActivityItemSource>

@property (copy, nonatomic) id /* block */ airDropDocumentCreator;
@property (retain, nonatomic) id airDropActivityItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)activityViewController:(id)a0 dataTypeIdentifierForActivityType:(id)a1;
- (id)activityViewController:(id)a0 itemForActivityType:(id)a1;
- (id)activityViewControllerPlaceholderItem:(id)a0;
- (id)initWithTitle:(id)a0 airDropDocumentCreator:(id /* block */)a1;

@end
