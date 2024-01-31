@class NSString;

@interface SmartReplies.SRSmartRepliesCaptioner : NSObject {
    void /* unknown type, empty encoding */ preferredLanguageCode;
    void /* unknown type, empty encoding */ $__lazy_storage_$_captionPhraseArbiter;
    void /* unknown type, empty encoding */ $__lazy_storage_$_shortcodeResolutionManager;
    void /* unknown type, empty encoding */ $__lazy_storage_$_predictionExemptTermsDetector;
}

@property (nonatomic, copy) NSString *preferredLanguageCode;

+ (BOOL)looksLikePhoneShortCodeWithHandle:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)captionsWithContactDetail:(id)a0 associatedText:(id)a1 onComplete:(id /* block */)a2;
- (void)captionsWithImage:(struct CGImage { } *)a0 onComplete:(id /* block */)a1;
- (void)captionsWithImageURL:(id)a0 onComplete:(id /* block */)a1;
- (void)captionsWithImageURLs:(id)a0 onComplete:(id /* block */)a1;
- (void)captionsWithLinkMetadata:(id)a0 onComplete:(id /* block */)a1;
- (void)captionsWithText:(id)a0 onComplete:(id /* block */)a1;
- (void)captionsWithText:(id)a0 preferBusinessTopics:(BOOL)a1 onComplete:(id /* block */)a2;
- (void)friendlyCaptionFor:(id)a0 onComplete:(id /* block */)a1;
- (id)normalizedShortCodeMessageTextWithContactDetail:(id)a0 originalMessageText:(id)a1;
- (void)summaryCaptionsFor:(id)a0 withTopicsOnly:(BOOL)a1 onComplete:(id /* block */)a2;
- (void)summaryCaptionsFor:(id)a0 withTopicsOnly:(BOOL)a1 preferBusinessTopics:(BOOL)a2 onComplete:(id /* block */)a3;
- (void)unifiedImageCaptionFor:(id)a0 onComplete:(id /* block */)a1;

@end
