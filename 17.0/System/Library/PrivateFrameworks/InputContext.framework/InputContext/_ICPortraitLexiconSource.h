@class PPNamedEntityStore, PPContactStore, PPContactNameRecordLoadingDelegate, _ICLexiconManager, PPNamedEntityRecordLoadingDelegate;

@interface _ICPortraitLexiconSource : NSObject <_ICLexiconSourcing, _ICFeedbackAccepting> {
    _ICLexiconManager *_manager;
    PPContactStore *_contactStore;
    PPContactNameRecordLoadingDelegate *_contactDelegate;
    PPNamedEntityStore *_namedEntityStore;
    PPNamedEntityRecordLoadingDelegate *_namedEntityDelegate;
}

- (void)warmUp;
- (void)hibernate;
- (id)init;
- (void)provideFeedbackForString:(id)a0 type:(unsigned char)a1 style:(unsigned char)a2;
- (void).cxx_destruct;
- (id)_makeContactDelegate;
- (id)_makeNamedEntityDelegate;
- (id)_makePPNamedEntityStore;
- (void)startLoadingWithManager:(id)a0;

@end
