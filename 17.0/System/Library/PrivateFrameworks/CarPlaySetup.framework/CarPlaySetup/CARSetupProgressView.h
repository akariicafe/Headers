@class NSProgress;

@interface CARSetupProgressView : UIProgressView

@property (retain, nonatomic) NSProgress *animatedObservedProgress;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)setObservedProgress:(id)a0 animated:(BOOL)a1;

@end
