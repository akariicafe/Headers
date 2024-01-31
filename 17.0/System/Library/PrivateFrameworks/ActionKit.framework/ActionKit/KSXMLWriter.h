@class NSArray, KSXMLAttributes, KSXMLElementContentsProxy, NSMutableArray;

@interface KSXMLWriter : KSForwardingWriter {
    KSXMLAttributes *_attributes;
    NSMutableArray *_openElements;
    BOOL _elementIsEmpty;
    unsigned long long _inlineWritingLevel;
    KSXMLElementContentsProxy *_contentsProxy;
}

@property (nonatomic) unsigned long long encoding;
@property (nonatomic) long long indentationLevel;
@property (readonly, weak, nonatomic) NSArray *openElements;

+ (void)initialize;
+ (id)stringFromAttributeValue:(id)a0;
+ (id)stringFromCharacters:(id)a0;

- (void)close;
- (void)flush;
- (void).cxx_destruct;
- (void)writeString:(id)a0;
- (void)endElement;
- (id)currentAttributes;
- (void)startElement:(id)a0;
- (void)didStartElement;
- (BOOL)hasOpenElement:(id)a0;
- (BOOL)isWritingInline;
- (BOOL)canWriteElementInline:(id)a0;
- (void)closeComment;
- (void)closeEmptyElementTag;
- (void)closeStartTag;
- (void)decreaseIndentationLevel;
- (BOOL)elementCanBeEmpty:(id)a0;
- (void)endCDATA;
- (BOOL)hasCurrentAttributes;
- (void)increaseIndentationLevel;
- (id)initWithOutputWriter:(id)a0;
- (id)initWithOutputWriter:(id)a0 encoding:(unsigned long long)a1;
- (void)openComment;
- (unsigned long long)openElementsCount;
- (void)popElement;
- (void)pushAttribute:(id)a0 value:(id)a1;
- (void)pushElement:(id)a0;
- (void)startCDATA;
- (void)startDocumentWithDocType:(id)a0 encoding:(unsigned long long)a1;
- (void)startElement:(id)a0 attributes:(id)a1;
- (void)startElement:(id)a0 writeInline:(BOOL)a1;
- (void)startNewline;
- (void)startWritingInline;
- (void)stopWritingInline;
- (id)topElement;
- (id)validateAttribute:(id)a0 value:(id)a1 ofElement:(id)a2;
- (BOOL)validateElement:(id)a0;
- (void)willStartElement:(id)a0;
- (void)writeAttribute:(id)a0 value:(id)a1;
- (void)writeAttributeValue:(id)a0;
- (void)writeCharacters:(id)a0;
- (void)writeComment:(id)a0;
- (id)writeElement:(id)a0 contentsInvocationTarget:(id)a1;
- (void)writeElement:(id)a0 text:(id)a1;
- (void)writeEndTag:(id)a0;
- (void)writeStringByEscapingXMLEntities:(id)a0 escapeQuot:(BOOL)a1;

@end
