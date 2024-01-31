@class UITextRange, NSItemProvider;

@interface UITextDraggableObject : NSObject

@property (retain, nonatomic) NSItemProvider *itemProvider;
@property (retain, nonatomic) UITextRange *range;
@property (copy, nonatomic) id /* block */ targetedPreviewProvider;
@property (copy, nonatomic) id /* block */ previewProvider;

+ (id)draggableObjectWithItemProvider:(id)a0 fromRange:(id)a1;

- (void).cxx_destruct;

@end
