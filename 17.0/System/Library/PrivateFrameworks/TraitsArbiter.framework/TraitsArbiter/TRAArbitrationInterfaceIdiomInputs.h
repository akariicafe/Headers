@class NSString;

@interface TRAArbitrationInterfaceIdiomInputs : NSObject <NSCopying, BSDescriptionProviding>

@property (readonly, nonatomic) BOOL isPad;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithIsPad:(BOOL)a0;

@end
