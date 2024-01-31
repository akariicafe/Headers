@class NSString;

@interface UIInputViewAnimationControllerBasic : NSObject <UIInputViewAnimationController>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)prepareAnimationWithHost:(id)a0 startPlacement:(id)a1 endPlacement:(id)a2;
- (void)completeAnimationWithHost:(id)a0 context:(id)a1;
- (void)performAnimationWithHost:(id)a0 context:(id)a1;

@end
