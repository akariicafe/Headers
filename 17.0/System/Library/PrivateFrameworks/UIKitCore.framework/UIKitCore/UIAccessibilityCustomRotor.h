@class NSUUID, NSString, NSAttributedString;

@interface UIAccessibilityCustomRotor : NSObject

@property (retain, nonatomic) NSUUID *uuid;
@property (weak, nonatomic) id targetElement;
@property (nonatomic) long long systemRotorType;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSAttributedString *attributedName;
@property (copy, nonatomic) id /* block */ itemSearchBlock;

- (void).cxx_destruct;
- (id)initWithAttributedName:(id)a0 itemSearchBlock:(id /* block */)a1;
- (id)initWithName:(id)a0 itemSearchBlock:(id /* block */)a1;
- (id)initWithSystemType:(long long)a0 itemSearchBlock:(id /* block */)a1;

@end
