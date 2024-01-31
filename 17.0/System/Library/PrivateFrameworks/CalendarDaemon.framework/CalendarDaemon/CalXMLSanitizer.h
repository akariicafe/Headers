@class NSString, NSMutableDictionary, NSData, NSMutableData, NSMutableArray, NSMutableString;

@interface CalXMLSanitizer : NSObject <NSXMLParserDelegate> {
    int _nestingLevel;
    NSMutableArray *_cachedIndents;
    NSString *_textContents;
    NSData *_cdataContents;
    NSMutableData *_mutableCDATAContents;
    BOOL _currentElementStartTagNeedsClosing;
    BOOL _currentElementHasNestedTags;
    NSMutableDictionary *namespaceURIToLevelOfFirstElementInNamespace;
    NSMutableArray *elementNames;
    NSMutableArray *elementNamespaces;
    NSMutableString *_xml;
}

@property (nonatomic) struct __sFILE { char *x0; int x1; int x2; short x3; short x4; struct __sbuf { char *x0; int x1; } x5; int x6; void *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; struct __sbuf { char *x0; int x1; } x12; struct __sFILEX *x13; int x14; unsigned char x15[3]; unsigned char x16[1]; struct __sbuf { char *x0; int x1; } x17; int x18; long long x19; } *output;
@property (readonly, nonatomic) NSString *scrubbedXML;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)parser:(id)a0 didStartElement:(id)a1 namespaceURI:(id)a2 qualifiedName:(id)a3 attributes:(id)a4;
- (void)parser:(id)a0 foundCDATA:(id)a1;
- (void)parser:(id)a0 didEndElement:(id)a1 namespaceURI:(id)a2 qualifiedName:(id)a3;
- (void).cxx_destruct;
- (void)parser:(id)a0 parseErrorOccurred:(id)a1;
- (void)parser:(id)a0 foundCharacters:(id)a1;
- (void)parser:(id)a0 foundComment:(id)a1;
- (void)_appendNamespaceURI:(id)a0 forElementName:(id)a1 qualifiedName:(id)a2;
- (id)currentRedactionRule;
- (void)flushContents;
- (id)getIndentation;

@end
