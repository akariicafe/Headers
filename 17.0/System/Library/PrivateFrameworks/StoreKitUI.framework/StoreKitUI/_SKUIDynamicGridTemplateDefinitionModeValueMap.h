@class NSMutableArray, NSMutableDictionary;

@interface _SKUIDynamicGridTemplateDefinitionModeValueMap : NSObject {
    NSMutableArray *_defaultTemplateDefinitionViewElements;
    NSMutableDictionary *_modeToTemplateDefinitionViewElements;
}

- (void).cxx_destruct;
- (void)addTemplateDefinitionViewElement:(id)a0 forMode:(id)a1;
- (id)templateDefinitionViewElementsForMode:(id)a0;

@end
