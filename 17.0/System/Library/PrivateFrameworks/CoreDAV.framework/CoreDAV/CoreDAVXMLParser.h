@class NSString, NSSet, CoreDAVXMLElementGenerator, NSURL, CoreDAVErrorItem, NSError, CoreDAVItem;

@interface CoreDAVXMLParser : NSXMLParser <CoreDAVResponseBodyParser>

@property (retain, nonatomic) CoreDAVXMLElementGenerator *rootElementGenerator;
@property (retain, nonatomic) CoreDAVXMLElementGenerator *rootErrorGenerator;
@property (retain, nonatomic) NSSet *parseHints;
@property (retain, nonatomic) NSURL *baseURL;
@property (readonly, nonatomic) CoreDAVItem *rootElement;
@property (readonly, nonatomic) CoreDAVErrorItem *rootError;
@property (readonly) NSError *parserError;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canHandleContentType:(id)a0;

@end
