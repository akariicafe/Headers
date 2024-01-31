@class NSString, NSMutableString;

@interface XRXMLSimpleStringElementParser : XRXMLElementParser {
    NSMutableString *accumulator;
}

@property (readonly, nonatomic) NSString *stringValue;

- (void).cxx_destruct;
- (void)_handleCharacters:(id)a0;
- (void)_handleCompletion;
- (id)collapsedStringValue;

@end
