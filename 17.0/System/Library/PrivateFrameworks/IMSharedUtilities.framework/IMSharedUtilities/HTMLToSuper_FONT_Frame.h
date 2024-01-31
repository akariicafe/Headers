@interface HTMLToSuper_FONT_Frame : HTMLToSuper_Default_Frame {
    BOOL _shouldPopFontName;
    BOOL _shouldPopFontSize;
}

- (void)parser:(id)a0 context:(id)a1 didEndElement:(id)a2 namespaceURI:(id)a3 qualifiedName:(id)a4;
- (void)parser:(id)a0 context:(id)a1 didStartElement:(id)a2 namespaceURI:(id)a3 qualifiedName:(id)a4 attributes:(id)a5;

@end
