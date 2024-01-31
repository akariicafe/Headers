@class SGMicrodataParserStackItem;

@interface SGMicrodataParser : NSObject

@property (readonly, nonatomic) SGMicrodataParserStackItem *stackItem;

+ (id)parse:(id)a0;
+ (id)whitespaceSplit:(id)a0;

- (void).cxx_destruct;
- (id)initWithDocument:(id)a0;
- (void)endElement;
- (void)startElement:(id)a0 withAttributes:(id)a1;
- (void)textContent:(id)a0;

@end
