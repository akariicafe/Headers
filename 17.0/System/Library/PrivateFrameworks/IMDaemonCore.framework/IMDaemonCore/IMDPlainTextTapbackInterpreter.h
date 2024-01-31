@class __IMDPlainTextTapbackInterpreterImpl;

@interface IMDPlainTextTapbackInterpreter : NSObject

@property (retain, nonatomic) __IMDPlainTextTapbackInterpreterImpl *impl;

- (id)init;
- (void).cxx_destruct;
- (id)interpretMessageItem:(id)a0 inChat:(id)a1;

@end
