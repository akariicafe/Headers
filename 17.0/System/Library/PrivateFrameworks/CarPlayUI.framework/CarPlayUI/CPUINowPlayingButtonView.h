@class NSString, CAStateController, CALayer, NSMutableArray;

@interface CPUINowPlayingButtonView : UIView <CAMLParserDelegate> {
    CALayer *_animatedGlyphLayer;
    CAStateController *_stateController;
    NSMutableArray *_barLayers;
    CALayer *_platterLayer;
}

@property (copy, nonatomic) NSString *stateName;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)classSubstitions;

- (void)_updateColors;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (Class)CAMLParser:(id)a0 didFailToFindClassWithName:(id)a1;
- (void)_handleGlyphLayerDidLoad:(id)a0;
- (id)initWithCAML:(id)a0;

@end
