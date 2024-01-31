@class SMSTextPart, NSMutableArray;

@interface SMSToSuperParserContext : IMHTMLToSuperParserContext {
    SMSTextPart *_currentTextPart;
}

@property (readonly, retain, nonatomic) NSMutableArray *orderedParts;

- (void)dealloc;
- (id)name;
- (void)_addPart:(id)a0;

@end
