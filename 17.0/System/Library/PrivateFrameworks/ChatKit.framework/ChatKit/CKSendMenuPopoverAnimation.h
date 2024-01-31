@class NSArray, NSObject;
@protocol OS_dispatch_group;

@interface CKSendMenuPopoverAnimation : NSObject

@property (copy, nonatomic) NSArray *animators;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *group;
@property (copy, nonatomic) id /* block */ completion;

- (id)initWithAnimators:(id)a0;
- (void)startAnimation;
- (void)addCompletion:(id /* block */)a0;
- (void).cxx_destruct;

@end
