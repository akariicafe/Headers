@class NSScanner;

@interface ECMessageBodyHTMLParser : ECMessageBodyParser {
    NSScanner *_scanner;
}

- (BOOL)parse;
- (void)dealloc;
- (void)_consumeNodesFromNode:(id)a0 upToNode:(id)a1;
- (void)_findBody;
- (BOOL)_isMilestoneTagName:(id)a0;
- (void)didFindError:(id)a0;
- (id)initWithHTML:(id)a0;
- (Class)messageBodyElementClass;
- (unsigned long long)messageBodyStringAccumulatorDefaultOptions;

@end
