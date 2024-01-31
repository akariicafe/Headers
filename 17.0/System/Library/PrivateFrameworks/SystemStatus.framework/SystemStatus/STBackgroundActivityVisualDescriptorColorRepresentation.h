@class BSColor, NSString;

@interface STBackgroundActivityVisualDescriptorColorRepresentation : NSObject <BSDebugDescriptionProviding, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BSColor *BSColor;
@property (readonly, copy, nonatomic) NSString *systemColorName;
@property (readonly, copy, nonatomic) NSString *patternColorKitImageName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPlistRepresentation:(id)a0;
- (id)succinctDescriptionBuilder;
- (void)encodeWithCoder:(id)a0;
- (id)_descriptionBuilderWithMultilinePrefix:(id)a0 forDebug:(BOOL)a1;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)debugDescriptionWithMultilinePrefix:(id)a0;
- (id)initWithBSColor:(id)a0;
- (id)initWithPatternColorKitImageName:(id)a0;
- (id)initWithSystemColorName:(id)a0;

@end
