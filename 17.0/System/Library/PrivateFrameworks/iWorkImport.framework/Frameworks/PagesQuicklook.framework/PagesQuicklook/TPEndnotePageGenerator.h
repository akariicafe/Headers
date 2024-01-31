@class NSString, TPFootnoteLayoutController;

@interface TPEndnotePageGenerator : NSObject <TPPageGenerator> {
    TPFootnoteLayoutController *_footnoteLayoutController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)createOrUpdatePageHintInSectionHint:(id)a0 withState:(id)a1;
- (id)initWithFootnoteLayoutController:(id)a0;
- (BOOL)wantsPageInSectionHint:(id)a0 withState:(id)a1;

@end
