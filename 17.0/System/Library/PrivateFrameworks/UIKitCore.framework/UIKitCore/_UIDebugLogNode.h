@class _UIDebugLogNodeTreeStyle, NSMutableArray;

@interface _UIDebugLogNode : _UIDebugLogMessage {
    NSMutableArray *_childMessages;
}

@property (retain, nonatomic) _UIDebugLogNodeTreeStyle *treeStyle;
@property (readonly, nonatomic) BOOL hasMessages;

+ (id)rootNode;

- (id)description;
- (void).cxx_destruct;
- (void)addMessage:(id)a0;
- (BOOL)_isNode;
- (void)__genericAppendChildDescription:(id)a0 withPrefix:(id)a1 inheritedTreeStyle:(id)a2 recursionSelector:(SEL)a3 appendHandler:(id /* block */)a4;
- (void)_appendAttributedChildDescription:(id)a0 withPrefix:(id)a1 inheritedTreeStyle:(id)a2;
- (void)_appendChildDescription:(id)a0 withPrefix:(id)a1 inheritedTreeStyle:(id)a2;
- (id)attributedDescription;
- (id)initWithString:(id)a0 attributedString:(id)a1;

@end
