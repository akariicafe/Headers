@class ICTTTodo;

@interface ICTK2TodoTextAttachment : ICTextAttachment

@property (readonly, nonatomic) ICTTTodo *todo;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })attachmentBoundsForAttributes:(id)a0 location:(id)a1 textContainer:(id)a2 proposedLineFragment:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 position:(struct CGPoint { double x0; double x1; })a4;
- (id)viewIdentifier;
- (struct CGSize { double x0; double x1; })attachmentSizeForTextContainer:(id)a0;
- (id)initWithTodo:(id)a0;

@end
