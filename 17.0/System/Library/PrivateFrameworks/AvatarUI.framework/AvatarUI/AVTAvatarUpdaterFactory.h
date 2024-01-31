@interface AVTAvatarUpdaterFactory : NSObject

+ (id /* block */)updaterForAggregatingUpdaters:(id)a0;
+ (id /* block */)updaterForClearingColorsForCategory:(long long)a0 destination:(long long)a1;
+ (id /* block */)updaterForColor:(id)a0 colorsState:(id)a1 pairedColors:(id)a2 additionalColor:(id)a3;
+ (id /* block */)updaterForColor:(id)a0 colorsState:(id)a1 pairedColors:(id)a2 additionalColor:(id)a3 saveToColorsState:(BOOL)a4;
+ (id /* block */)updaterForColor:(id)a0 variationOverride:(id)a1 colorsState:(id)a2 pairedColors:(id)a3 additionalColor:(id)a4 saveToColorsState:(BOOL)a5;
+ (id /* block */)updaterForPairingCategory:(id)a0 colorsState:(id)a1;
+ (id /* block */)updaterForPreset:(id)a0 pairedPreset:(id)a1;

@end
