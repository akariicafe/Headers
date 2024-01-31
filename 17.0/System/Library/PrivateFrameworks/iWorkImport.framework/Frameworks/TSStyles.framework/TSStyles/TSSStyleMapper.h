@class TSSStylesheet, NSString, TSURetainedPointerKeyDictionary, NSMutableSet, NSMutableArray;

@interface TSSStyleMapper : NSObject <TSKStyleMapper> {
    TSSStylesheet *_targetStylesheet;
    TSURetainedPointerKeyDictionary *_styleMap;
    NSMutableArray *_mappingContext;
}

@property (readonly, nonatomic) TSSStylesheet *targetStylesheet;
@property (readonly, nonatomic) NSMutableSet *createdStyles;
@property (nonatomic) BOOL clientsMustRemap;
@property (nonatomic) BOOL forceMatchStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)_mappedStyleForStyle:(id)a0 depth:(unsigned long long)a1;
- (id)mappedStyleForStyle:(id)a0;
- (void)popMappingContext:(id)a0;
- (void)pushMappingContext:(id)a0;
- (id)initWithTargetStylesheet:(id)a0;
- (id)targetParentByIdentifierPackageDescriptorFallbackMatchForStyle:(id)a0;
- (id)createRootStyleForStyle:(id)a0 withPropertyMap:(id)a1;
- (BOOL)shouldMapParentOfStyle:(id)a0;
- (id)stylesheetForNewRootStyleFromStyle:(id)a0;
- (id)targetParentByContentTagMatchForStyle:(id)a0;
- (id)targetParentByIdentifierExactMatchForStyle:(id)a0;
- (id)targetParentByNameMatchForStyle:(id)a0;
- (id)targetParentByPropertyMapMatchForUnidentifiedStyle:(id)a0;
- (id)targetParentForStyle:(id)a0;

@end
