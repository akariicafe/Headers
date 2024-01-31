@class NSString, NSSymbolPulseEffect, CAShapeLayer;

@interface STUIStatusBarActivityIconView : STUIStatusBarImageView <STUIStatusBarPersistentAnimation> {
    BOOL _ringing;
    double _ringingIconScale;
    NSSymbolPulseEffect *_symbolPulseEffect;
}

@property (retain, nonatomic) CAShapeLayer *innerRingShapeLayer;
@property (retain, nonatomic) CAShapeLayer *outerRingShapeLayer;
@property (readonly, nonatomic, getter=isRinging) BOOL ringing;
@property (readonly, nonatomic, getter=isSymbolPulsing) BOOL symbolPulsing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)actionForLayer:(id)a0 forKey:(id)a1;
- (void)resumePersistentAnimation;
- (void)applyStyleAttributes:(id)a0;
- (void)setRinging:(BOOL)a0 forUpdate:(id)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (void)_setupRingingLayersForStyleAttributes:(id)a0;
- (void)_teardownRingingLayers;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setSymbolPulsing:(BOOL)a0 forUpdate:(id)a1;

@end
