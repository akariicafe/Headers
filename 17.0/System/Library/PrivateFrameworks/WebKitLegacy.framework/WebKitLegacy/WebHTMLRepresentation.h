@class NSString, WebHTMLRepresentationPrivate;

@interface WebHTMLRepresentation : NSObject <WebDocumentRepresentation, WebDocumentDOM> {
    WebHTMLRepresentationPrivate *_private;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)supportedImageMIMETypes;
+ (id)supportedMIMETypes;
+ (id)supportedMediaMIMETypes;
+ (id)supportedNonImageMIMETypes;
+ (id)unsupportedTextMIMETypes;

- (id)init;
- (void)dealloc;
- (id)title;
- (void)setDataSource:(id)a0;
- (id)DOMDocument;
- (id)documentSource;
- (id)formForElement:(id)a0;
- (id)controlsInForm:(id)a0;
- (BOOL)_isDisplayingWebArchive;
- (void)_redirectDataToManualLoader:(id)a0 forPluginView:(id)a1;
- (BOOL)canProvideDocumentSource;
- (BOOL)canSaveAsWebArchive;
- (id)currentForm;
- (BOOL)elementDoesAutoComplete:(id)a0;
- (BOOL)elementIsPassword:(id)a0;
- (id)elementWithName:(id)a0 inForm:(id)a1;
- (void)finishedLoadingWithDataSource:(id)a0;
- (id)matchLabels:(id)a0 againstElement:(id)a1;
- (void)receivedData:(id)a0 withDataSource:(id)a1;
- (void)receivedError:(id)a0 withDataSource:(id)a1;
- (id)searchForLabels:(id)a0 beforeElement:(id)a1;
- (id)searchForLabels:(id)a0 beforeElement:(id)a1 resultDistance:(unsigned long long *)a2 resultIsInCellAbove:(BOOL *)a3;

@end
