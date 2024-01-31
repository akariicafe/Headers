@class NSMutableDictionary, NSDictionary, NSString, NSNumber;

@interface TypistHWKeyboard : NSObject

@property (nonatomic) struct __GSKeyboard { } *hardwareKeyboard;
@property (retain, nonatomic) NSMutableDictionary *characterToKeycodeMap;
@property (nonatomic) unsigned int hidKeyboardType;
@property (nonatomic) unsigned char usagePage;
@property (retain, nonatomic) NSNumber *keyboardCountryCode;
@property (retain, nonatomic) NSNumber *keyboardLanguage;
@property (retain, nonatomic) NSDictionary *propertyDictionary;
@property (retain, nonatomic) NSString *propertyDictionaryString;
@property (retain, nonatomic) NSDictionary *modifierCharMap;
@property (nonatomic) double typeInterval;
@property (nonatomic) double pressDuration;

+ (unsigned char)_convertHIDKeyboardTypeToGSKeyboardType:(unsigned int)a0;
+ (id)_convertKeyboardLanguageToHIDCountryCode:(long long)a0;
+ (unsigned int)_convertKeyboardLanguageToHIDKeyboardType:(id)a0;
+ (id)convertHIDCountryCodeToLanguage:(long long)a0;
+ (id)keyboardLanguageValueMap;
+ (id)keyboardLayoutValueMap;

- (void)dealloc;
- (void)detach;
- (void)typeString:(id)a0;
- (void).cxx_destruct;
- (id)initWithLanguage:(id)a0;
- (id)getPropertyDictionaryString;
- (id)usagePairsForText:(id)a0;
- (id)_generateKeystrokeStream:(id)a0 appendTypeInterval:(BOOL)a1;
- (id)_getModifierMaskMap;
- (void)_insertCharacterForKeyCode:(unsigned short)a0 logOutput:(id)a1;
- (void)_insertKey:(unsigned short)a0 logOutput:(id)a1;
- (void)_insertStaticKeys;
- (void)_setupCharacterToKeycodeMap;
- (id)_subsequentKeyPressPairForCharacter:(id)a0;
- (id)generateKeystrokeStream:(id)a0;
- (unsigned int)getHIDKeyboardType;
- (void)pressAndHoldKeys:(id)a0 forDuration:(double)a1 withValidation:(id /* block */)a2 after:(double)a3;
- (void)pressKeycode:(unsigned short)a0;
- (id)pressKeycodes:(id)a0;
- (void)setModifierCharMap;

@end
