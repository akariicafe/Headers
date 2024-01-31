@class NSString, TSPDeepCopyObjectMap, TSSStylesheet;

@interface TSDDeepCopyObjectMapStyleMapper : NSObject <TSKStyleMapper> {
    TSPDeepCopyObjectMap *_objectMap;
}

@property (readonly, nonatomic) TSSStylesheet *targetStylesheet;
@property (readonly, nonatomic) BOOL clientsMustRemap;
@property (nonatomic) BOOL forceMatchStyle;
@property (readonly, nonatomic) BOOL sourceObjectsMayUseMultipleStylesheets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)mappedStyleForStyle:(id)a0;
- (void)popMappingContext:(id)a0;
- (void)pushMappingContext:(id)a0;
- (id)initWithTargetStylesheet:(id)a0 deepCopyObjectMap:(id)a1 sourceObjectsMayUseMultipleStylesheets:(BOOL)a2;

@end
