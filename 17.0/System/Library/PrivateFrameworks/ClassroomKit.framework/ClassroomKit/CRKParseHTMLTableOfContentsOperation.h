@class NSString, NSMutableString, CRKOPFPackageContents, CRKChapter, NSMutableArray, NSXMLParser;

@interface CRKParseHTMLTableOfContentsOperation : CATOperation <NSXMLParserDelegate> {
    NSXMLParser *mHTMLParser;
    NSString *mHTMLFilePath;
    CRKOPFPackageContents *mPackageContents;
    NSMutableArray *mChapters;
    CRKChapter *mCurrentChapter;
    NSMutableArray *mParentChapters;
    NSMutableString *mCurrentText;
    BOOL mIsInNav;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)main;
- (BOOL)isAsynchronous;
- (void)parser:(id)a0 didStartElement:(id)a1 namespaceURI:(id)a2 qualifiedName:(id)a3 attributes:(id)a4;
- (void)parser:(id)a0 didEndElement:(id)a1 namespaceURI:(id)a2 qualifiedName:(id)a3;
- (void).cxx_destruct;
- (void)parserDidEndDocument:(id)a0;
- (void)parser:(id)a0 parseErrorOccurred:(id)a1;
- (void)parser:(id)a0 foundCharacters:(id)a1;
- (id)initWithFilePath:(id)a0 packageContents:(id)a1;

@end
