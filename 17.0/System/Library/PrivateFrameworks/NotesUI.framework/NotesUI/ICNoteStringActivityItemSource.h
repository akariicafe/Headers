@class NSString, NSAttributedString;

@interface ICNoteStringActivityItemSource : ICNoteBaseActivityItemSource <UIActivityItemSource>

@property (copy, nonatomic) id /* block */ attributedStringCreator;
@property (copy, nonatomic) NSAttributedString *attributedString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)activityViewController:(id)a0 itemForActivityType:(id)a1;
- (id)activityViewControllerPlaceholderItem:(id)a0;
- (BOOL)allowsAttributedStringForActivityType:(id)a0;
- (id)initWithTitle:(id)a0 attributedStringCreator:(id /* block */)a1;

@end
