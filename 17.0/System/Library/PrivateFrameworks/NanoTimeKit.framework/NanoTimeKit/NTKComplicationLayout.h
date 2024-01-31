@class NSMutableArray;

@interface NTKComplicationLayout : NSObject {
    NSMutableArray *_stateLayouts;
}

+ (id)layoutWithDefaultRule:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)_layoutForState:(long long)a0;
- (id)defaultLayoutRuleForState:(long long)a0;
- (id)layoutRuleForComplicationState:(long long)a0 layoutOverride:(long long)a1;
- (void)setDefaultLayoutRule:(id)a0 forState:(long long)a1;
- (void)setOverrideLayoutRule:(id)a0 forState:(long long)a1 layoutOverride:(long long)a2;

@end
