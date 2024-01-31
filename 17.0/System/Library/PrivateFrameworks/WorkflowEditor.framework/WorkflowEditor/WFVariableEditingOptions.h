@class WFVariableEditingAnchor;

@interface WFVariableEditingOptions : NSObject

@property (copy, nonatomic) id /* block */ onChange;
@property (copy, nonatomic) id /* block */ onFinish;
@property (readonly, nonatomic) WFVariableEditingAnchor *anchor;
@property (readonly, nonatomic) unsigned long long resultType;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)variableDidChange:(id)a0;
- (void)finishEditingReturningToKeyboard:(BOOL)a0;
- (id)initWithAnchor:(id)a0 resultType:(unsigned long long)a1 onChange:(id /* block */)a2 onFinish:(id /* block */)a3;

@end
