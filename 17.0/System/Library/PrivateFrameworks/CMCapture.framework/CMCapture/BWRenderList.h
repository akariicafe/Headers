@class NSSet, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface BWRenderList : NSObject <BWRenderListParameterListProvider> {
    struct BWRenderListRendererList { struct BWRenderListRendererNode *slh_first; } _rendererList;
    struct BWRenderListRendererNode { struct { struct BWRenderListRendererNode *x0; } x0; id x1; } *_originalMarkerRendererNode;
    struct BWRenderListParameterList { struct BWRenderListParameterNode *slh_first; } _parameterList;
    BOOL _isolationQueuePrepared;
    NSObject<OS_dispatch_queue> *_preparationIsolationQueue;
}

@property (nonatomic, getter=isPrepared) BOOL prepared;
@property (readonly, nonatomic) struct BWRenderListRendererList { struct BWRenderListRendererNode *x0; } *rendererList;
@property (readonly, nonatomic) BOOL producesOriginalRender;
@property (readonly, nonatomic) BOOL supportsAnimation;
@property (readonly, nonatomic) BOOL affectsMetadata;
@property (readonly, nonatomic) NSSet *originalFilterNames;
@property (readonly, nonatomic) NSSet *processedFilterNames;
@property (readonly, nonatomic) struct BWRenderListParameterList { struct BWRenderListParameterNode *x0; } *parameterList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)shallowDepthOfFieldFilterName;

- (void)dealloc;
- (BOOL)shouldAllowOriginalRenderFromNode:(struct BWRenderListRendererNode { struct { struct BWRenderListRendererNode *x0; } x0; id x1; } *)a0;
- (id)initWithAnimationSupported:(BOOL)a0 affectsMetadata:(BOOL)a1;
- (id)initWithResourceProvider:(id)a0 originalFilters:(id)a1 processedFilters:(id)a2 optimizationStrategy:(short)a3;
- (void)prepareWithParameters:(id)a0 forInputVideoFormat:(id)a1 inputDepthFormat:(id)a2;

@end
