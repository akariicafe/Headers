@protocol SAElementIdentifying, NSCopying;

@interface _SBSADynamicPersistentAnimationAssertion : SAAssertion

@property (copy, nonatomic) id<SAElementIdentifying, NSCopying> elementIdentity;
@property (nonatomic) long long animationType;

- (void).cxx_destruct;
- (id)_descriptionConstituents;
- (id)initWithElementIdentity:(id)a0 animation:(long long)a1;

@end
