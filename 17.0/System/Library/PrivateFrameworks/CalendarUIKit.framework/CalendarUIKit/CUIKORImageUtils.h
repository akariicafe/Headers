@interface CUIKORImageUtils : NSObject

+ (double)colorBarThickness;
+ (id)_calendarColorDotImageForColor:(id)a0 baseSize:(double)a1 font:(id)a2;
+ (id)_calendarColorDotImageForColor:(id)a0 diameter:(double)a1;
+ (id)_calendarColorDotImageForColor:(id)a0 diameter:(double)a1 enabled:(BOOL)a2 adjustWhiteColor:(BOOL)a3;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_edgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0 scaledByFont:(id)a1;
+ (unsigned long long)_uniqueDotHashForColor:(id)a0 diameter:(double)a1;
+ (id)scaledCalendarInvitationDotForFont:(id)a0;
+ (id)scaledNewTimeProposedDotForFont:(id)a0;

@end
