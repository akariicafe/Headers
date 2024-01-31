@class NSString, UITextRange;

@interface UITextReplacement : NSObject

@property (readonly, nonatomic) UITextRange *range;
@property (readonly, nonatomic) NSString *originalText;
@property (readonly, nonatomic) NSString *replacementText;
@property (readonly, nonatomic) NSString *menuTitle;
@property (copy, nonatomic) id /* block */ replacementCompletionBlock;
@property (nonatomic) unsigned int usageTrackingMask;

+ (id)replacementWithRange:(id)a0 original:(id)a1 replacement:(id)a2 menuTitle:(id)a3;

- (void).cxx_destruct;
- (BOOL)_isNoReplacementsFoundItem;
- (void)didReplaceTextWithTarget:(id)a0;

@end
