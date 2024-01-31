@interface CUIKTextProviderUtils : NSObject

+ (BOOL)dropLeftRedundantDesignator;
+ (BOOL)smallCapsAllowed;
+ (BOOL)designatorRequiresWhitespace;
+ (id)timeFormatByRemovingWhitespaceAroundDesignatorOfTimeFormat:(id)a0 designatorRequiresWhitespace:(BOOL)a1;

@end
