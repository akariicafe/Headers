@class NSString;
@protocol _UINavigationControllerVisualStyleProviding;

@interface _UINavigationControllerVisualStyleFactory : NSObject <_UINavigationControllerVisualStyleProviding>

@property (retain, nonatomic) id<_UINavigationControllerVisualStyleProviding> visualStyleProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

@end
