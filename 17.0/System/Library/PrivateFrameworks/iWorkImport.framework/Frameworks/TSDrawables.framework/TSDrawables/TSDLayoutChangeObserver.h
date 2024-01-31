@class NSString, TSDLayoutController, TSKDocumentRoot;

@interface TSDLayoutChangeObserver : NSObject <TSKChangeSourceObserver> {
    TSKDocumentRoot *_documentRoot;
    TSDLayoutController *_layoutController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)i_layoutRegistered:(id)a0;
- (void)i_layoutUnregistered:(id)a0;
- (void)processChanges:(id)a0 forChangeSource:(id)a1;
- (void)didProcessAllChanges;
- (void)preprocessChanges:(id)a0 forChangeSource:(id)a1;
- (id)initWithDocumentRoot:(id)a0 layoutController:(id)a1;

@end
