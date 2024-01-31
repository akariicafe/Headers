@class NSString, NSArray, _LTTranslationSession, NSMutableDictionary, NSAttributedString, _LTTextToSpeechTranslationRequest;

@interface _LTTextTranslationRequest : _LTTranslationRequest <_LTSpeechTranslationDelegate> {
    _LTTranslationSession *_session;
    _LTTextToSpeechTranslationRequest *_request;
    NSMutableDictionary *_savedAttributes;
    NSArray *_paragraphOrder;
    unsigned long long _outstandingCount;
    NSMutableDictionary *_receivedParagraphs;
    id /* block */ _done;
    BOOL _translationFinished;
    BOOL _hasCalledCompletionHandler;
}

@property (copy, nonatomic) NSString *sentence;
@property (copy, nonatomic) NSAttributedString *text;
@property (copy, nonatomic) NSArray *ignoringAttributes;
@property (copy, nonatomic) id /* block */ textHandler;
@property (copy, nonatomic) id /* block */ translationHandler;
@property (copy, nonatomic) id /* block */ textTranslationHandler;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)serviceDelegate;
- (void)_handleParagraphResponse:(id)a0 error:(id)a1;
- (void)_addAlignmentAttributesToResult:(id)a0 requestIdentifier:(id)a1;
- (id)_alignmentAttributeKeyFromRequestIdentifier:(id)a0 alignmentIdentifier:(id)a1;
- (void)_callCompletionHandlersWithResult:(id)a0 error:(id)a1;
- (void)_constructFinalParagraphResult;
- (id)_getStoredAttributesForRequestIdentifier:(id)a0 alignmentIdentifier:(id)a1;
- (id)_paragraphRequestForText:(id)a0;
- (void)_saveAttributes:(id)a0 forRequestUniqueID:(id)a1 alignmentIdentifier:(id)a2;
- (void)_startTranslationWithService:(id)a0 done:(id /* block */)a1;
- (void)_translationFailedWithError:(id)a0;
- (id)loggingType;
- (void)translationDidFinishWithError:(id)a0;
- (void)translatorDidTranslate:(id)a0;

@end
