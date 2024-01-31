@class NSString, ENMLWriter, NSMutableString, ENXMLSaxParser;
@protocol ENHTMLtoENMLConverterDelegate;

@interface ENHTMLtoENMLConverter : NSObject <ENXMLSaxParserDelegate, ENXMLWriterDelegate> {
    ENXMLSaxParser *_htmlParser;
    ENMLWriter *_enmlWriter;
    NSMutableString *_enml;
    BOOL _inHTMLBody;
    int _skipCount;
}

@property (weak, nonatomic) id<ENHTMLtoENMLConverterDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)finish;
- (id)htmlParser;
- (void).cxx_destruct;
- (void)parserDidEndDocument:(id)a0;
- (void)cancel;
- (void)writeData:(id)a0;
- (void)parser:(id)a0 foundCharacters:(id)a1;
- (void)parserDidStartDocument:(id)a0;
- (void)parser:(id)a0 didEndElement:(id)a1;
- (void)parser:(id)a0 didStartElement:(id)a1 attributes:(id)a2;
- (void)parser:(id)a0 didFailWithError:(id)a1;
- (void)xmlWriterDidEndWritingDocument:(id)a0;
- (id)enmlFromContentsOfHTMLFile:(id)a0;
- (id)enmlFromHTMLContent:(id)a0;
- (id)enmlWriter;
- (void)xmlWriter:(id)a0 didGenerateData:(id)a1;

@end
