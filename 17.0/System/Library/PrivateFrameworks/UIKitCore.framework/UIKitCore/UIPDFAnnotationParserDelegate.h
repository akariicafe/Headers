@class NSString, NSMutableString, UIPDFAnnotation;

@interface UIPDFAnnotationParserDelegate : NSObject <NSXMLParserDelegate> {
    NSMutableString *_characters;
}

@property (retain, nonatomic) UIPDFAnnotation *annotation;
@property (readonly, nonatomic) BOOL parseError;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)parser:(id)a0 didStartElement:(id)a1 namespaceURI:(id)a2 qualifiedName:(id)a3 attributes:(id)a4;
- (void)parser:(id)a0 didEndElement:(id)a1 namespaceURI:(id)a2 qualifiedName:(id)a3;
- (void)parser:(id)a0 parseErrorOccurred:(id)a1;
- (void)parser:(id)a0 foundCharacters:(id)a1;
- (void)parserDidStartDocument:(id)a0;

@end
