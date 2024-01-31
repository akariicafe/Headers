@class NSUUID, UITextRange;
@protocol NSObject;

@interface UIAccessibilityCustomRotorItemResult : NSObject

@property (retain, nonatomic) NSUUID *uuid;
@property (weak, nonatomic) id<NSObject> targetElement;
@property (retain, nonatomic) UITextRange *targetRange;

- (void).cxx_destruct;
- (id)initWithTargetElement:(id)a0 targetRange:(id)a1;

@end
