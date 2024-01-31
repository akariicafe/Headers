@interface AKBasicLoginSecondFactorActions : NSObject <NSCopying>

@property (copy, nonatomic) id /* block */ regenerateCodeAction;
@property (copy, nonatomic) id /* block */ codeEnteredAction;
@property (copy, nonatomic) id /* block */ ak_cancelAction;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
