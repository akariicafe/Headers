@class NSString, UIView;

@interface VUICALayerLoopbackDelegate : NSObject <CALayerDelegate>

@property (weak, nonatomic) UIView *view;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init:(id)a0;
- (id)actionForLayer:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;

@end
