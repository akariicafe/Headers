@class NSMutableArray, NSString, IKJSNavigationDocument, IKAppContext, SUUINavigationDocumentController;

@interface SUUIJSDOMFeatureNavigationDocument : NSObject <IKAppNavigationController, SUUIDOMFeature> {
    IKJSNavigationDocument *_jsNavigationDocument;
    NSMutableArray *_stackItems;
}

@property (retain, nonatomic) SUUINavigationDocumentController *navigationDocumentController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *featureName;
@property (readonly, weak, nonatomic) IKAppContext *appContext;

+ (id)makeFeatureJSObjectForFeature:(id)a0;
+ (id)possibleFeatureNames;

- (void)clear;
- (void)removeDocument:(id)a0;
- (void).cxx_destruct;
- (id)documents;
- (id)initWithDOMNode:(id)a0 featureName:(id)a1;
- (void)insertDocument:(id)a0 beforeDocument:(id)a1 options:(id)a2;
- (void)popDocument;
- (void)popToDocument:(id)a0;
- (void)popToRootDocument;
- (void)pushDocument:(id)a0 options:(id)a1;
- (void)replaceDocument:(id)a0 withDocument:(id)a1 options:(id)a2;

@end
