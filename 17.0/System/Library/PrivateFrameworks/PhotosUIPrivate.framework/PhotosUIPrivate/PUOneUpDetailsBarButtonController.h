@interface PUOneUpDetailsBarButtonController : NSObject {
    void /* unknown type, empty encoding */ barButtonItem;
    void /* unknown type, empty encoding */ browseViewModel;
    void /* unknown type, empty encoding */ revertTimer;
    void /* unknown type, empty encoding */ hasFinishedDisplayingVisualLookupGlyph;
}

+ (id)defaultGlyphNameFor:(id)a0;

- (id)init;
- (void)update;
- (void).cxx_destruct;
- (void)currentAssetDidChange;
- (id)initWithBarButtonItem:(id)a0 browseViewModel:(id)a1;

@end
