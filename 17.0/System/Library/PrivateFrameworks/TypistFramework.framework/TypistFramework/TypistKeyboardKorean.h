@class NSArray, NSDictionary, NSMutableDictionary;

@interface TypistKeyboardKorean : TypistKeyboard

@property (retain, nonatomic) NSArray *hangul;
@property (retain, nonatomic) NSArray *doubleConsonantJong;
@property (retain, nonatomic) NSArray *doubleConsonantSplitJong;
@property (retain, nonatomic) NSArray *doubleVowel;
@property (retain, nonatomic) NSArray *doubleVowelSplit;
@property (retain, nonatomic) NSDictionary *radicalBreakdownMultiTap;
@property (retain, nonatomic) NSDictionary *radicalBreakdownFlick;
@property (retain, nonatomic) NSDictionary *flickTable;
@property (retain, nonatomic) NSMutableDictionary *multiTapOrbit;
@property (retain, nonatomic) NSDictionary *multiTapCompleteKey;
@property (nonatomic) BOOL automaticallyInsertsArrowKey;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isTenKey;
- (id)init:(id)a0 options:(id)a1;
- (void)setupExtraKeyplaneDataIfNeeded:(id)a0;
- (id)_convertRadicalIfNeeded:(id)a0;
- (id)_convertToMultiTapIfNecessary:(id)a0;
- (id)_flickGestureDirection:(unsigned long long)a0;
- (id)addKeyboardPopupKeys:(id)a0 inPlane:(id)a1 addTo:(id)a2 keyplaneKeycaps:(id)a3;
- (id)changeKeyNameToGenericCharacter:(id)a0;
- (id)decomposeKoreanStrings:(id)a0;
- (id)generateKeyplaneSwitchTable:(id)a0;
- (id)generateKeystrokeStream:(id)a0;
- (id)generateSwipeStream:(id)a0;
- (id)getExpectedPlaneNameForKey:(id)a0 currentPlane:(id)a1;
- (BOOL)isAutoshiftedToCapitalPlane:(id)a0;
- (BOOL)isSwitchedToCapitalPlane:(id)a0 previous:(id)a1 currentPlane:(id)a2 context:(id)a3;
- (id)setupKeyboardInfo:(id)a0 options:(id)a1;
- (void)setupTenKey:(id)a0 forKey:(id)a1 keyName:(id)a2 planeName:(id)a3;
- (BOOL)usesMecabraCandidateBar;

@end
