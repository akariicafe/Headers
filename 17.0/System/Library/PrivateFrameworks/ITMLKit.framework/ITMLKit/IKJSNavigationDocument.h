@class NSArray, NSString;
@protocol IKAppNavigationController;

@interface IKJSNavigationDocument : IKJSObject <IKJSNavigationDocument> {
    struct { BOOL hasClear; BOOL hasSetDocuments; BOOL hasPresentModal; BOOL hasDismissModal; } _delegateSelectors;
}

@property (readonly, weak, nonatomic) id<IKAppNavigationController> navigationControllerDelegate;
@property (readonly, retain, nonatomic) NSArray *documents;
@property (readonly) NSString *OPTION_RETAIN_CONTEXT;

- (void)clear;
- (void)removeDocument:(id)a0;
- (void).cxx_destruct;
- (void)dismissModal;
- (id)initWithAppContext:(id)a0 navigationController:(id)a1;
- (void)popDocument;
- (void)popToDocument:(id)a0;
- (void)popToRootDocument;
- (void)pushDocument:(id)a0 :(id)a1;
- (void)replaceDocument:(id)a0 :(id)a1 :(id)a2;
- (id)_makeAppDocumentWithDocument:(id)a0;
- (void)_migrateMediaControllerFromDocument:(id)a0 toDocument:(id)a1;
- (void)insertBeforeDocument:(id)a0 :(id)a1 :(id)a2;
- (void)presentModal:(id)a0 :(id)a1;
- (void)setDocuments:(id)a0 :(id)a1;

@end
