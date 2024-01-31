@class NSString, NSMutableSet, _UILegibilitySettings;

@interface CSAppearance : NSObject <BSDescriptionProviding, CSAppearanceProviding, NSCopying>

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic, getter=isTransitional) BOOL transitional;
@property (copy, nonatomic) NSMutableSet *components;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *appearanceIdentifier;

+ (id)appearanceWithIdentifier:(id)a0;
+ (id)appearanceForProvider:(id)a0;

- (id)initWithIdentifier:(id)a0;
- (void)conformsToCSAppearanceProviding;
- (void)reset;
- (void)unionAppearance:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)componentForType:(long long)a0 property:(unsigned long long)a1;
- (long long)flagForComponentType:(long long)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)addComponent:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)removeAllComponentsWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;
- (id)componentForType:(long long)a0 identifier:(id)a1;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToAppearance:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)removeComponent:(id)a0;

@end
