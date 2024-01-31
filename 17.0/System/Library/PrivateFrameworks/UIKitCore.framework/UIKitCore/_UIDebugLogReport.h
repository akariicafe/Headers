@class NSMutableArray;

@interface _UIDebugLogReport : NSObject

@property (retain, nonatomic, getter=_statements) NSMutableArray *statements;
@property (retain, nonatomic, getter=_prefixStack) NSMutableArray *prefixStack;
@property (readonly, nonatomic) unsigned long long messageCount;
@property (nonatomic) unsigned long long currentIndentLevel;
@property (copy, nonatomic) id /* block */ fallbackMessagePrefixHandler;

- (id)init;
- (void).cxx_destruct;
- (void)addMessage:(id)a0;
- (id)_messagePrefixAtIndentLevel:(unsigned long long)a0;
- (void)addLineBreak;
- (void)addMessageWithFormat:(id)a0;
- (void)clearAllMessagePrefixes;
- (void)decrementIndentLevel;
- (void)decrementIndentLevelAndPopMessagePrefix;
- (void)incrementIndentLevel;
- (void)incrementIndentLevelAndPushMessagePrefix:(id)a0;
- (void)popMessagePrefix;
- (void)pushMessagePrefix:(id)a0;
- (void)pushMessagePrefixHandler:(id /* block */)a0;
- (void)resetIndentLevel;

@end
