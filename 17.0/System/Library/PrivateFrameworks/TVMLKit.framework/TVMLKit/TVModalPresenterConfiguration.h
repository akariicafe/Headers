@class NSString, UIView;

@interface TVModalPresenterConfiguration : NSObject

@property (nonatomic) BOOL allowsModalOverModal;
@property (nonatomic) BOOL allowsMenuDismissal;
@property (copy, nonatomic) NSString *barButtonID;
@property (nonatomic) unsigned long long configurationType;
@property (nonatomic) struct CGSize { double width; double height; } formSheetSize;
@property (nonatomic) struct CGSize { double width; double height; } popoverSize;
@property (nonatomic) BOOL navigationBarHidden;
@property (nonatomic) long long presentationStyle;
@property (retain, nonatomic) UIView *sourceView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } sourceRect;

- (id)init;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (void)_configureWithDictionary:(id)a0;

@end
