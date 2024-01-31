@class NSString, NSArray;

@interface ActivityUIServices.ActivityAmbientSceneSpecification : ActivityUIServices.ActivitySceneSpecificationBase

@property (nonatomic, readonly) NSString *uiSceneSessionRole;
@property (nonatomic, readonly) NSArray *defaultExtensions;

- (id)init;

@end
