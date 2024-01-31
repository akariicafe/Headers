@protocol SFFeedbackListener;

@interface WeakListener : NSObject {
    id<SFFeedbackListener> _weakListener;
}

@property (readonly, nonatomic) id<SFFeedbackListener> strongListener;

- (void).cxx_destruct;
- (id)initWithListener:(id)a0;

@end
