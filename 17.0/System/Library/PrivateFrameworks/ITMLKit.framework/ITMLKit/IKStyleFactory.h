@class IKStylesGroup, NSMutableDictionary;

@interface IKStyleFactory : NSObject <NSCopying>

@property (readonly, retain, nonatomic) IKStylesGroup *stylesGroup;
@property (readonly, retain, nonatomic) NSMutableDictionary *styleListsByClassSelector;

+ (id)styleFactoryWithMarkup:(id)a0 filterBlockedStyles:(BOOL)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setViewElementStylesDirty;
- (id)_collapsedStyleListForSelectors:(id)a0 targetSelector:(id)a1 stylesGroup:(id)a2;
- (id)initWithStylesGroup:(id)a0;
- (id)styleListForClassSelector:(id)a0;

@end
