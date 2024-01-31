@class UIFieldEditor, UIView;
@protocol _UIFieldEditorHostingViewRequirements;

@interface _UIFieldEditorHost : NSObject

@property (readonly, weak, nonatomic) UIView<_UIFieldEditorHostingViewRequirements> *hostingView;
@property (readonly, nonatomic) UIFieldEditor *hostedFieldEditor;
@property (readonly, nonatomic, getter=isHostingFieldEditor) BOOL hostingFieldEditor;

+ (id)fieldEditorHostForTextField:(id)a0;

- (void)layoutIfNeeded;
- (id)description;
- (void).cxx_destruct;
- (id)initWithHostingView:(id)a0;
- (void)addFieldEditor:(id)a0;
- (id)_viewForHostingFieldEditor;
- (void)addPlaceholderLabel:(id)a0;
- (void)removeFieldEditor;

@end
