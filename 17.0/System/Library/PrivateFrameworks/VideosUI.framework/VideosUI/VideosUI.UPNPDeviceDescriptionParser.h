@interface VideosUI.UPNPDeviceDescriptionParser : NSObject <NSXMLParserDelegate> {
    void /* unknown type, empty encoding */ scratchpad;
    void /* unknown type, empty encoding */ currentElementName;
    void /* unknown type, empty encoding */ xmlPath;
}

- (id)init;
- (void)parser:(id)a0 didStartElement:(id)a1 namespaceURI:(id)a2 qualifiedName:(id)a3 attributes:(id)a4;
- (void)parser:(id)a0 didEndElement:(id)a1 namespaceURI:(id)a2 qualifiedName:(id)a3;
- (void).cxx_destruct;
- (void)parser:(id)a0 foundCharacters:(id)a1;

@end
