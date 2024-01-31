@class NSString;

@interface LAUIAnimationDelegate : NSObject <CAAnimationDelegate>

@property (copy, nonatomic) id /* block */ didStartHandler;
@property (copy, nonatomic) id /* block */ didStopHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
