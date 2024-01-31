@class HMLightProfile;

@interface HFNaturalLightingActionBuilder : HFActionBuilder

@property (retain, nonatomic) HMLightProfile *lightProfile;
@property (nonatomic) BOOL naturalLightEnabled;

+ (Class)homeKitRepresentationClass;

- (unsigned long long)hash;
- (id)performValidation;
- (id)description;
- (void).cxx_destruct;
- (id)validationError;
- (id)createNewAction;
- (id)commitItem;
- (id)containedAccessoryRepresentables;
- (id)copyForCreatingNewAction;
- (BOOL)hasSameTargetAsAction:(id)a0;
- (id)initWithExistingObject:(id)a0 inHome:(id)a1;
- (BOOL)canUpdateWithActionBuilder:(id)a0;
- (id)compareToObject:(id)a0;
- (BOOL)updateWithActionBuilder:(id)a0;

@end
