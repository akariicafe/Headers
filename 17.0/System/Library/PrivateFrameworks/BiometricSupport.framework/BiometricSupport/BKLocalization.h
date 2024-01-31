@interface BKLocalization : NSObject

+ (id)getLocalizedString:(id)a0;
+ (id)getLocalizedString:(id)a0 fromFile:(id)a1;
+ (id)getLocalizedString:(id)a0 fromStringTable:(id)a1 withBundle:(id)a2;
+ (id)getLocalizedStringOrNil:(id)a0 fromStringTable:(id)a1 withBundle:(id)a2;
+ (void)reportLocalizationABC;

@end
