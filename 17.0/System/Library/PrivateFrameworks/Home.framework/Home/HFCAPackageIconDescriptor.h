@class NSString, NSDictionary;

@interface HFCAPackageIconDescriptor : NSObject <HFIconDescriptor>

@property (readonly, nonatomic) NSString *packageIdentifier;
@property (readonly, nonatomic) NSString *state;
@property (readonly, nonatomic) NSDictionary *iconModifiers;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL shouldForceLTR;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)iconDescriptorShouldAlwaysAnimate:(id)a0;

- (long long)compare:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)iconDescriptorByMergingWithIconDescriptor:(id)a0;
- (id)initWithPackageIdentifier:(id)a0;
- (id)initWithPackageIdentifier:(id)a0 state:(id)a1;
- (id)initWithPackageIdentifier:(id)a0 state:(id)a1 modifiers:(id)a2;

@end
