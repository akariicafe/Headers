@class CALayer, NSString, CAPresentationModifier;
@protocol UIVectorOperatable;

@interface UIBridgedAnimatable : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain, nonatomic) CALayer *layer;
@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) id<UIVectorOperatable> fromValue;
@property (retain, nonatomic) id<UIVectorOperatable> toValue;
@property (retain, nonatomic) CAPresentationModifier *presentationModifier;
@property (nonatomic) BOOL isFinished;
@property (copy, nonatomic) id /* block */ completion;

- (void)dealloc;
- (void).cxx_destruct;
- (void)animationDidFinish:(BOOL)a0;
- (id)initWithLayer:(id)a0 key:(id)a1 fromValue:(id)a2 toValue:(id)a3 completion:(id /* block */)a4;
- (void)updateWithProgress:(double)a0;

@end
