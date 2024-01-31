@class NSString, UIColor;

@interface SBSAElementContext : NSObject <NSCopying, SAElementIdentifying, SBSABlockMutating>

@property (class, readonly, nonatomic) Class mutatorClass;

@property (copy, nonatomic, setter=_setClientIdentifier:) NSString *clientIdentifier;
@property (copy, nonatomic, setter=_setElementIdentifier:) NSString *elementIdentifier;
@property (nonatomic, setter=_setLayoutMode:) long long layoutMode;
@property (nonatomic, setter=_setPreferredEdgeOutsets:) struct NSDirectionalEdgeInsets { double top; double leading; double bottom; double trailing; } preferredEdgeOutsets;
@property (nonatomic, setter=_setInterfaceOrientation:) long long interfaceOrientation;
@property (nonatomic, getter=isCustomLayout, setter=_setCustomLayout:) BOOL customLayout;
@property (nonatomic, setter=_setSystemApertureCustomLayout:) long long systemApertureCustomLayout;
@property (nonatomic, setter=_setSystemApertureCustomLayoutCustomAnimationStyle:) long long systemApertureCustomLayoutCustomAnimationStyle;
@property (nonatomic, setter=_setSystemApertureLayoutCustomizingOptions:) long long systemApertureLayoutCustomizingOptions;
@property (nonatomic, setter=_setActiveDynamicAnimation:) long long activeDynamicAnimation;
@property (copy, nonatomic, setter=_setKeyColor:) UIColor *keyColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)instanceWithBlock:(id /* block */)a0;

- (id)copyWithBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSystemApertureElementContext:(id)a0;

@end
