@class NTKApricotComplication, NSMapTable, NTKComplicationVariant;

@interface NTKApricotComplicationController : NTKComplicationController {
    NTKApricotComplication *_apricotComplication;
    NSMapTable *_displayWrapperToShowPreview;
    NSMapTable *_displayWrapperToShowSnapshot;
    NTKComplicationVariant *_variant;
}

+ (BOOL)_isLegacy;
+ (BOOL)_acceptsComplicationType:(unsigned long long)a0 family:(long long)a1 forDevice:(id)a2;

- (void).cxx_destruct;
- (void)_updateStateForDisplayWrapper:(id)a0;
- (void)addDisplayWrapper:(id)a0;
- (id)complicationApplicationIdentifier;
- (void)didTouchUpInsideView:(id)a0;
- (BOOL)hasTapAction;
- (id)initWithComplication:(id)a0 variant:(id)a1 device:(id)a2;
- (void)removeDisplayWrapper:(id)a0;
- (Class)richComplicationDisplayViewClass;
- (void)setDataMode:(long long)a0 forDisplayWrapper:(id)a1;
- (void)setLaunchLocation:(id)a0 forDisplayWrapper:(id)a1;
- (void)setShowPreview:(BOOL)a0 forDisplayWrapper:(id)a1;
- (void)setShowSnapshot:(BOOL)a0 forDisplayWrapper:(id)a1;
- (BOOL)showPreviewForDisplayWrapper:(id)a0;
- (BOOL)showSnapshotForDisplayWrapper:(id)a0;
- (BOOL)wantsLegacyDisplay;

@end
