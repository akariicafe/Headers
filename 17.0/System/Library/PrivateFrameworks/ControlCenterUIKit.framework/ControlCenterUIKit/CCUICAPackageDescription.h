@class NSURL, NSDictionary;

@interface CCUICAPackageDescription : NSObject

@property (readonly, copy, nonatomic) NSURL *packageURL;
@property (nonatomic) BOOL flipsForRightToLeftLayoutDirection;
@property (nonatomic) BOOL honorsUIViewAnimationState;
@property (copy, nonatomic) NSDictionary *stateUpdateHandlers;

+ (id)descriptionForPackageNamed:(id)a0 inBundle:(id)a1;

- (void).cxx_destruct;
- (id)initWithPackageName:(id)a0 inBundle:(id)a1;

@end
