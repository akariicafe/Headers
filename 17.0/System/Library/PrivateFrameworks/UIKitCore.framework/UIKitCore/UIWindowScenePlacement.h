@class NSString;

@interface UIWindowScenePlacement : NSObject <BSDebugDescriptionProviding, NSCopying>

@property (class, readonly, nonatomic) unsigned long long _placementType;

@property (readonly, nonatomic) BOOL _preserveLayout;
@property (readonly, nonatomic) BOOL _requestFullscreen;
@property (readonly, nonatomic) BOOL _requestCenterSlot;
@property (readonly, nonatomic) BOOL _requestBackground;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_default;

- (id)_init;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescriptionWithMultilinePrefix:(id)a0;
- (id)_createConfigurationWithError:(id *)a0;

@end
