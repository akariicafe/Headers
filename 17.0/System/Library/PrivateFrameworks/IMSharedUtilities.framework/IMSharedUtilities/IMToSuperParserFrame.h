@interface IMToSuperParserFrame : IMXMLParserFrame

- (void)parser:(id)a0 context:(id)a1 foundCharacters:(id)a2;
- (void)parser:(id)a0 context:(id)a1 didEndElement:(id)a2 namespaceURI:(id)a3 qualifiedName:(id)a4;
- (void)parser:(id)a0 context:(id)a1 didStartElement:(id)a2 namespaceURI:(id)a3 qualifiedName:(id)a4 attributes:(id)a5;
- (void)parser:(id)a0 context:(id)a1 foundIgnorableWhitespace:(id)a2;

@end
