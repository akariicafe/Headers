@class UIScrollView, SXTransitionDataSourceNode, NSString;
@protocol SXDocumentMetadataProviding, SXComponentController;

@interface SXTransitionDataSourceProvider : NSObject <SXTransitionDataSourceProvider>

@property (readonly, nonatomic) id<SXComponentController> componentController;
@property (readonly, nonatomic) UIScrollView *scrollView;
@property (readonly, nonatomic) id<SXDocumentMetadataProviding> documentMetadataProvider;
@property (retain, nonatomic) SXTransitionDataSourceNode *currentNode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithComponentController:(id)a0 scrollView:(id)a1 documentMetadataProvider:(id)a2;
- (id)transitionDataSourceForType:(unsigned long long)a0;

@end
