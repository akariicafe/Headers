@class NSString, SUUIViewElement;
@protocol SUUIEntityProviding;

@interface SUUIDynamicShelfMenuBarViewElement : SUUIShelfMenuBarViewElement <SUUIDynamicShelfViewElement> {
    SUUIViewElement *_cellTemplateViewElement;
}

@property (readonly, nonatomic) SUUIViewElement *cellTemplateViewElement;
@property (readonly, nonatomic) id<SUUIEntityProviding> entityProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)applyUpdatesWithElement:(id)a0;
- (BOOL)isDynamicContainer;
- (void)setShelfItemViewElementValidator:(id /* block */)a0;

@end
