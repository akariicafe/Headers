@class NSMutableDictionary, NSLocale;

@interface ACTKeyboardLayoutUtils : NSObject {
    NSLocale *_locale;
}

@property (readonly, nonatomic) NSMutableDictionary *keyOverrides;

- (id)initWithLocale:(id)a0;
- (id)baseKeyForString:(id)a0;
- (void).cxx_destruct;
- (id)createTTKPlane:(id)a0;
- (id)alternativeKeyForString:(id)a0 keyplane:(id)a1 preferBaseKeyVariants:(BOOL)a2 preferManualShift:(BOOL)a3 substituteUpperCaseForLowerCase:(BOOL)a4;
- (id)anyKeyForString:(id)a0 keyplane:(id)a1 wantSecondaryString:(BOOL)a2 isRetyping:(BOOL)a3 preferBaseKeyVariants:(BOOL)a4 preferManualShift:(BOOL)a5 substituteUpperCaseForLowerCase:(BOOL)a6;
- (id)exactKeyForString:(id)a0 keyplane:(id)a1;
- (id)exactKeyForString:(id)a0 keyplane:(id)a1 includeSecondaryStrings:(BOOL)a2;
- (id)representedStringForKey:(id)a0 shifted:(BOOL)a1;
- (id)representedStringForKey:(id)a0 shifted:(BOOL)a1 includeSecondaryStrings:(BOOL)a2;
- (void)setLayoutKeyOverride:(id)a0 forKey:(id)a1 uiKeyboardStringNothing:(id)a2;
- (id)substitutesForKey:(id)a0 preferBaseKeyVariants:(BOOL)a1 preferManualShift:(BOOL)a2 substituteUpperCaseForLowerCase:(BOOL)a3;

@end
