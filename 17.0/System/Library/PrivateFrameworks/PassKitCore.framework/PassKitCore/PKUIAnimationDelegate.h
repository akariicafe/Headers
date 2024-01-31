@class NSString;

@interface PKUIAnimationDelegate : NSObject <CAAnimationDelegate>

@property (copy, nonatomic) id /* block */ didStartHandler;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
