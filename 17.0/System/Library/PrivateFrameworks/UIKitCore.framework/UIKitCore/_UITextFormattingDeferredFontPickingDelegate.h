@class NSString;
@protocol UIResponderStandardEditActions;

@interface _UITextFormattingDeferredFontPickingDelegate : NSObject <UIFontPickerViewControllerDelegate>

@property (nonatomic) double fontSize;
@property (weak, nonatomic) id<UIResponderStandardEditActions> inputController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
