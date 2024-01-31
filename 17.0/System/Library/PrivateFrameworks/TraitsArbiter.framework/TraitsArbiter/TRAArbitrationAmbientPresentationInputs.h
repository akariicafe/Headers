@class NSString;

@interface TRAArbitrationAmbientPresentationInputs : NSObject <NSCopying, BSDescriptionProviding>

@property (readonly, nonatomic, getter=isAmbientPresented) BOOL ambientPresented;
@property (readonly, nonatomic) long long ambientDisplayStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAmbientPresented:(BOOL)a0 ambientDisplayStyle:(long long)a1;
- (BOOL)isEqualToAmbientPresentationInputs:(id)a0;

@end
