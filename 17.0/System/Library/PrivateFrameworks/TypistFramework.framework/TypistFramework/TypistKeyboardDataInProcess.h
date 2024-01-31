@class NSString;

@interface TypistKeyboardDataInProcess : NSObject <TypistKeyboardDataProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldShowDictationKey;
+ (BOOL)hasMarkedText;
+ (id)markedText;
+ (BOOL)dismissKeyboard;
+ (id)setKeyboards:(id)a0;
+ (id)_variantsByAppendingDualStringKey:(id)a0 toVariants:(id)a1;
+ (void)showCandidateAtIndex:(long long)a0;
+ (BOOL)_activeInputModesContainsInputMode:(id)a0;
+ (id)addKeyboardGestureKeys:(id)a0 keys:(id)a1 inPlane:(id)a2 addTo:(id)a3;
+ (id)addKeyboardPopupKeys:(id)a0 keys:(id)a1 inPlane:(id)a2 addTo:(id)a3 keyplaneKeycaps:(id)a4;
+ (id)addKeyboards:(id)a0;
+ (id)appendingSecondaryStringToVariantsTop:(id)a0 secondaryString:(id)a1 withDirection:(id)a2;
+ (struct CGPoint { double x0; double x1; })centerOfKey:(struct CGPoint { double x0; double x1; })a0 withOffset:(struct CGPoint { double x0; double x1; })a1;
+ (id)cleanUpSwitchTableBasedOnDefaultPlane:(id)a0 defaultPlaneName:(id)a1;
+ (id)determineDefaultPlane10Key:(id)a0 basePlaneName:(id)a1;
+ (id)determineDefaultPlane:(id)a0 basePlaneName:(id)a1;
+ (id)dismissOneTimeTIActions:(id)a0;
+ (unsigned long long)downActionFlagsForKey:(id)a0 plane:(id)a1 keyplaneKeycaps:(id)a2;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })findKeyBoundsInKeyboard:(id)a0;
+ (struct CGPoint { double x0; double x1; })floatingKeyboardDraggablePoint;
+ (id)generateKeyplaneSwitchTable:(id)a0;
+ (id)generateKeyplaneSwitchTableFor10Key:(id)a0;
+ (BOOL)generatePopupKeySubtrees:(id)a0 key:(id)a1 plane:(id)a2 layout:(id)a3 keyplaneKeycaps:(id)a4;
+ (id)getAllCandidates;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getCandidateBarRect;
+ (struct CGPoint { double x0; double x1; })getCandidateCenter:(id)a0;
+ (struct CGPoint { double x0; double x1; })getCandidateCenterAtIndex:(long long)a0;
+ (struct CGPoint { double x0; double x1; })getExtendedCandidateViewToggleButtonCenter;
+ (id)getKeyboardLayout:(id)a0;
+ (id)getKeyboardPlaneKeys:(id)a0 keys:(id)a1 inPlane:(id)a2;
+ (id)getKeyboardUISettings;
+ (id)getKeyplaneDescription:(id)a0;
+ (id)getRepresentedStringFromKey:(id)a0;
+ (id)getSentenceBoundaryStrings;
+ (int)getShuangpinEnumeration:(id)a0;
+ (id)getTIPreferences;
+ (id)getVisibleCandidateList:(id)a0;
+ (id)getVisibleKeyplaneName;
+ (int)getWubiEnumeration:(id)a0;
+ (BOOL)isCandidateCellVisible:(id)a0;
+ (BOOL)isExtendedCandidateViewMode;
+ (BOOL)keyHasAccentedVariants:(id)a0 plane:(id)a1 keyplaneKeycaps:(id)a2;
+ (id)removeKeyboards:(id)a0;
+ (id)setKeyboardUISettings:(id)a0;
+ (id)setOneHandedKeyboardHandBias:(id)a0;
+ (id)setTIPreferences:(id)a0;
+ (BOOL)shouldShowGlobeKey;
+ (void)showPopupVariantsForKey:(id)a0 key:(id)a1 plane:(id)a2 keyplaneKeycaps:(id)a3;
+ (BOOL)switchToKeyboard:(id)a0;
+ (BOOL)switchToPlane:(id)a0;
+ (id)updateCachedKeyplaneKeycaps:(id)a0;


@end
