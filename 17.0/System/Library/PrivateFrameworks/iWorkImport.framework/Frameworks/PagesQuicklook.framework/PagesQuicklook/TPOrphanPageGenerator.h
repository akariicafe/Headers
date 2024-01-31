@class NSString, TPDocumentRoot;

@interface TPOrphanPageGenerator : NSObject <TPPageGenerator> {
    TPDocumentRoot *_documentRoot;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDocumentRoot:(id)a0;
- (void)createOrUpdatePageHintInSectionHint:(id)a0 withState:(id)a1;
- (BOOL)wantsPageInSectionHint:(id)a0 withState:(id)a1;

@end
