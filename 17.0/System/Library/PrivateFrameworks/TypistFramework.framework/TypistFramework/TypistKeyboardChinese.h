@class NSDictionary, NSRegularExpression;

@interface TypistKeyboardChinese : TypistKeyboard

@property (retain, nonatomic) NSDictionary *flickTable;
@property (retain, nonatomic) NSDictionary *pinyinMap;
@property (retain, nonatomic) NSRegularExpression *whiteSpaceRegex;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isTenKey;
- (BOOL)isHandwriting;
- (id)init:(id)a0 options:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_determineHandwritingBound;
- (id)_flickGestureDirection;
- (BOOL)_isPinyin;
- (BOOL)_isWubihua;
- (id)changeKeyNameToGenericCharacter:(id)a0;
- (id)generateKeyplaneSwitchTable:(id)a0;
- (id)generateKeystrokeStream:(id)a0;
- (id)getExpectedPlaneNameForKey:(id)a0 currentPlane:(id)a1;
- (id)getPostfixKey:(id)a0;
- (BOOL)isAutoshiftedToCapitalPlane:(id)a0;
- (BOOL)isPinyinCharacter:(unsigned short)a0;
- (BOOL)isSwitchedToCapitalPlane:(id)a0 previous:(id)a1 currentPlane:(id)a2 context:(id)a3;
- (BOOL)isSwitchedToDefaultPlane:(id)a0;
- (BOOL)keyWillCommitCandidate:(id)a0;
- (id)setupKeyboardInfo:(id)a0 options:(id)a1;
- (void)setupSentenceBoundryStrings;
- (void)setupTenKey:(id)a0 forKey:(id)a1 keyName:(id)a2 planeName:(id)a3;
- (BOOL)usesMecabraCandidateBar;
- (id)willDirectlyCommitNumbersAndPunctuationSet;
- (id)willSwitchToDefaultPlaneCharacterSet;

@end
