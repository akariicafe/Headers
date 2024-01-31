@class SUUISettingsFamilyViewStateCoordinator;

@interface SUUIFamilySettingDescription : SUUISettingDescription {
    SUUISettingsFamilyViewStateCoordinator *_viewStateCoordinator;
}

@property (readonly, nonatomic) long long viewState;

+ (Class)_viewClassForSettingDescription:(id)a0;

- (void).cxx_destruct;
- (void)_updateViewState;
- (BOOL)_initiallyHidden;
- (void)_updateWithViewState:(long long)a0;
- (void)handleSelectionOnCompletion:(id /* block */)a0;
- (id)initWithViewElement:(id)a0 parent:(id)a1;

@end
