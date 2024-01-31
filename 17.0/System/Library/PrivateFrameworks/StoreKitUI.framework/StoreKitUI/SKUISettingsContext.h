@class NSMutableArray, SKUIClientContext, NSMutableDictionary;

@interface SKUISettingsContext : NSObject {
    NSMutableDictionary *_elementTypeClass;
    NSMutableArray *_descriptionReusePool;
    NSMutableArray *_viewReusePool;
}

@property (weak, nonatomic) SKUIClientContext *clientContext;

- (void).cxx_destruct;
- (id)_dequeueReusableSettingDescriptionWithReuseIdentifier:(id)a0 forViewElement:(id)a1 parent:(id)a2;
- (void)_registerClass:(Class)a0 forReuseIdentifier:(id)a1;
- (void)_registerReuseClasses;
- (id)dequeueReusableSettingDescriptionForViewElement:(id)a0 parent:(id)a1;
- (id)initWithClientContext:(id)a0;
- (void)recycleSettingDescriptions:(id)a0;

@end
