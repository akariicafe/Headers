@class NSString;

@interface TRAArbitrationUserInterfaceStyleInputs : NSObject <NSCopying, BSDescriptionProviding>

@property (readonly, nonatomic) long long userInterfaceStyle;
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
- (id)initWithUserInterfaceStyle:(long long)a0;
- (BOOL)isEqualToUserInterfaceStyleInputs:(id)a0;

@end
