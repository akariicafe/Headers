@class NSString;
@protocol _DKKnowledgeQuerying;

@interface PSDESPlugin : NSObject <DESRecipeEvaluation>

@property (retain, nonatomic) id<_DKKnowledgeQuerying> knowledgeStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void).cxx_destruct;
- (void)performEvaluation:(id)a0;
- (BOOL)shouldDownloadAttachmentWithURL:(id)a0 recipe:(id)a1 recordInfo:(id)a2;

@end
