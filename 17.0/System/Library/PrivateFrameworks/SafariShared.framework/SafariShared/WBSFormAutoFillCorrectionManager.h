@class WBSFormAutoFillClassificationToCorrectionsTransformer;
@protocol WBSFormAutoFillCorrectionManagerDelegate, WBSFormAutoFillCorrectionsStore;

@interface WBSFormAutoFillCorrectionManager : NSObject {
    id<WBSFormAutoFillCorrectionsStore> _correctionsStore;
    WBSFormAutoFillClassificationToCorrectionsTransformer *_classificationToCorrectionsTransformer;
}

@property (weak, nonatomic) id<WBSFormAutoFillCorrectionManagerDelegate> delegate;

- (void).cxx_destruct;
- (id)_feedbackProcessor;
- (void)_setCorrections:(id)a0 forFingerprint:(id)a1 onDomain:(id)a2;
- (void)getCorrectionsForFormFieldFingerprint:(id)a0 onDomain:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithCorrectionsStore:(id)a0;
- (void)setCorrectionSet:(id)a0;

@end
