@class TSSStylesheet, NSString, TSURetainedPointerKeyDictionary, TSKAddedToDocumentContext, NSMutableArray;

@interface TSSStyleMapper : NSObject <TSKStyleMapper> {
    TSSStylesheet *_targetStylesheet;
    TSSStylesheet *_targetThemeStylesheet;
    TSKAddedToDocumentContext *_dolcContext;
    TSURetainedPointerKeyDictionary *_styleMap;
    NSMutableArray *_mappingContext;
    BOOL _varyInThemeStylesheet;
}

@property (readonly, nonatomic) TSSStylesheet *targetStylesheet;
@property (nonatomic) BOOL forceMatchStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)_mappedStyleForStyle:(id)a0 depth:(unsigned long long)a1;
- (id)createStyleForStyle:(id)a0 withPropertyMap:(id)a1;
- (id)initWithTargetStylesheet:(id)a0 newStyleDOLCContext:(id)a1;
- (id)mappedStyleForStyle:(id)a0;
- (id)mappedStyleForStyle:(id)a0 inThemeStylesheet:(BOOL)a1;
- (id)pCascadedFindExistingRootlessStyle:(id)a0 propertyMap:(id)a1;
- (id)pTargetParentForStyle:(id)a0 withParentIdentifier:(id)a1;
- (void)popMappingContext:(id)a0;
- (void)pushMappingContext:(id)a0;
- (void)varyInThemeStylesheetForDurationOfBlock:(id /* block */)a0;
- (void)varyInThemeStylesheetIf:(BOOL)a0 forDurationOfBlock:(id /* block */)a1;

@end
