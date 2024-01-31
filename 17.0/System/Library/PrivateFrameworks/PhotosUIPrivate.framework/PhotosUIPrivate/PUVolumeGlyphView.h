@class NSString, CAStateController, CALayer, NSObject;
@protocol OS_dispatch_queue;

@interface PUVolumeGlyphView : UIView <CAMLParserDelegate> {
    CALayer *_glyphLayer;
    CAStateController *_stateController;
    NSObject<OS_dispatch_queue> *_loadingQueue;
}

@property (copy, nonatomic) NSString *stateName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)classSubstitions;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (Class)CAMLParser:(id)a0 didFailToFindClassWithName:(id)a1;
- (void)_handleGlyphLayerDidLoad:(id)a0;

@end
