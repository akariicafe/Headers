@class UITextRange;

@interface UITextDraggableGeometrySameViewDropOperationResult : NSObject

@property (readonly, nonatomic) UITextRange *resultRange;
@property (readonly, nonatomic) id /* block */ targetedPreviewProvider;

+ (id)resultWithRange:(id)a0 targetedPreviewProvider:(id /* block */)a1;

- (void).cxx_destruct;
- (id)initWithRange:(id)a0 targetedPreviewProvider:(id /* block */)a1;

@end
