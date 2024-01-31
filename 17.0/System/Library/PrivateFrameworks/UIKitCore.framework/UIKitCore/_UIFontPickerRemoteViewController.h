@class NSString;
@protocol _UIFontPickerViewControllerHost;

@interface _UIFontPickerRemoteViewController : _UIRemoteViewController <_UIFontPickerViewControllerHost>

@property (weak, nonatomic) id<_UIFontPickerViewControllerHost> _delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

@end
