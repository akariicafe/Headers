@class NSString;
@protocol DESRecipeEvaluation;

@interface DESExceptionCatchingEvaluator : NSObject <DESRecipeEvaluation> {
    id<DESRecipeEvaluation> _evaluator;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)evaluateRecipe:(id)a0 matchingRecordSet:(id)a1 binaryResult:(id *)a2 error:(id *)a3;
- (id)evaluateRecipe:(id)a0 matchingRecordSet:(id)a1 error:(id *)a2;
- (id)evaluateRecipe:(id)a0 recordInfo:(id)a1 recordData:(id)a2 attachments:(id)a3 error:(id *)a4;
- (void)performEvaluation:(id)a0;
- (id)serverSafeRecordInfoWithRecordInfo:(id)a0;
- (BOOL)shouldDownloadAttachmentWithURL:(id)a0 recipe:(id)a1 recordInfo:(id)a2;
- (id)telemetryWithRecordSet:(id)a0;
- (id)initWithEvaluator:(id)a0;

@end
