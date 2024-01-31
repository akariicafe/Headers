@class NSString, HDHealthRecordProcessingContext;

@interface HDHealthRecordExtractionUsingRulesTask : NSObject <HDHealthRecordPipelineTask> {
    HDHealthRecordProcessingContext *_processingContext;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)processWithError:(id *)a0;
- (id)initWithProcessingContext:(id)a0;

@end
