@class OADThemeOverrides, OADColorMap;

@interface PDSlideChild : PDSlideBase {
    BOOL mShowMasterPlaceholderAnimations;
    BOOL mShowMasterShapes;
    OADThemeOverrides *mThemeOverrides;
    OADColorMap *mColorMapOverride;
}

- (id)colorScheme;
- (id)init;
- (id)colorMap;
- (id)description;
- (void).cxx_destruct;
- (void)doneWithContent;
- (BOOL)showMasterPlaceholderAnimations;
- (id)colorMapOverride;
- (id)defaultTextListStyle;
- (id)drawingTheme;
- (id)fontScheme;
- (void)setColorMapOverride:(id)a0;
- (void)setShowMasterPlaceholderAnimations:(BOOL)a0;
- (void)setShowMasterShapes:(BOOL)a0;
- (BOOL)showMasterShapes;
- (id)styleMatrix;
- (id)themeOverrides;

@end
