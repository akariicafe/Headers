@class NSMutableString;

@interface _BKRuleResolutionTranscript : NSObject {
    NSMutableString *_string;
    long long _indentLevel;
}

- (id)init;
- (void)appendItem:(id)a0;
- (id)build;
- (void).cxx_destruct;
- (void)appendSection:(id)a0;
- (void)restoreSection:(id)a0;
- (void)_appendIndent;
- (void)_appendIndentedItemWithPrefix:(id)a0 label:(id)a1 args:(char *)a2;
- (void)appendEnvironment:(id)a0;
- (void)appendFailure:(id)a0;
- (void)appendMatch:(id)a0;
- (void)appendRejection:(id)a0;
- (void)appendResolution:(id)a0;
- (void)popSection;
- (void)pushSection;
- (id)saveSection;

@end
