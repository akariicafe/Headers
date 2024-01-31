@interface UIKBKeyplaneChangeContext : NSObject

@property (nonatomic) struct CGSize { double width; double height; } size;
@property (readonly, nonatomic) BOOL sizeDidChange;
@property (nonatomic) BOOL splitWidthsChanged;
@property (nonatomic) BOOL selfSizingChanged;
@property (nonatomic) BOOL updateAssistantView;
@property (nonatomic) BOOL isSecureTextEntry;

+ (id)keyplaneChangeContext;
+ (id)keyplaneChangeContextWithSize:(struct CGSize { double x0; double x1; })a0;

@end
