@interface CUIKTimeTextProvider : NSObject

+ (id)_applyFont:(id)a0 toString:(id)a1 allowSmallCaps:(BOOL)a2;
+ (id)timeAttributedTextWithDate:(id)a0 calendar:(id)a1 font:(id)a2 options:(long long)a3;
+ (id)timeAttributedTextWithDate:(id)a0 calendar:(id)a1;
+ (id)_timeAttributedTextWithDate:(id)a0 calendar:(id)a1 droppingDesignator:(BOOL)a2 designatorRequiresWhitespace:(BOOL)a3 smallCapsAllowed:(BOOL)a4 retainZeroMinutes:(BOOL)a5;

@end
