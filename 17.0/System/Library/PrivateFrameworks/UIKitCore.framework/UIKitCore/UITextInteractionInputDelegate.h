@class UITextInteraction, NSString;

@interface UITextInteractionInputDelegate : NSObject <UITextInputDelegate>

@property (weak, nonatomic) UITextInteraction *rootInteraction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)selectionWillChange:(id)a0;
- (void)selectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)textWillChange:(id)a0;
- (void)textDidChange:(id)a0;

@end
