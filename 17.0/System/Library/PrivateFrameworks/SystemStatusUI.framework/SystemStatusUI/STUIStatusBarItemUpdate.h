@class STUIStatusBarStyleAttributes, NSString, NSDictionary, STStatusBarData;

@interface STUIStatusBarItemUpdate : NSObject <BSDebugDescriptionProviding, NSCopying>

@property (nonatomic) BOOL enablementChanged;
@property (nonatomic) BOOL enabled;
@property (nonatomic) BOOL dataChanged;
@property (retain, nonatomic) STStatusBarData *data;
@property (nonatomic) BOOL styleAttributesChanged;
@property (retain, nonatomic) STUIStatusBarStyleAttributes *styleAttributes;
@property (retain, nonatomic) NSDictionary *placementInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)succinctDescriptionBuilder;
- (id)_descriptionBuilderWithMultilinePrefix:(id)a0 forDebug:(BOOL)a1;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescriptionWithMultilinePrefix:(id)a0;

@end
