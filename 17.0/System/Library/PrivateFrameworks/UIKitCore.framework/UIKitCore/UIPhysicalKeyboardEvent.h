@class NSString, _UIPhysicalKeyTranslationMap;

@interface UIPhysicalKeyboardEvent : UIPressesEvent <NSSecureCoding> {
    BOOL _canPrivatize;
    _UIPhysicalKeyTranslationMap *_originalEscapeKeyTranslationMap;
    _UIPhysicalKeyTranslationMap *_keyTranslationMap;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *_modifiedInput;
@property (retain, nonatomic) NSString *_unmodifiedInput;
@property (retain, nonatomic) NSString *_shiftModifiedInput;
@property (retain, nonatomic) NSString *_commandModifiedInput;
@property (retain, nonatomic) NSString *_markedInput;
@property (retain, nonatomic) NSString *_privateInput;
@property (retain, nonatomic) NSString *_hint;
@property (nonatomic, setter=_setModifierFlags:) long long _modifierFlags;
@property (nonatomic) long long _privateModifierFlags;
@property (readonly, nonatomic) long long _gsModifierFlags;
@property (readonly, nonatomic) BOOL _isKeyDown;
@property (readonly, nonatomic) BOOL _isGlobeKey;
@property (readonly, nonatomic) BOOL _isEjectKey;
@property (readonly, nonatomic) BOOL _isModifierKey;
@property (readonly, nonatomic) BOOL _isARepeat;
@property (readonly, nonatomic) BOOL _isDeleteKey;
@property (nonatomic) long long _keyCode;
@property (nonatomic) int _inputFlags;
@property (nonatomic) long long source;
@property (nonatomic) unsigned int keyCommandCode;
@property (nonatomic) BOOL keyCommandHandlingBeforePublic;
@property (nonatomic) BOOL keyEventForwardedFromInputUIHost;
@property (nonatomic) BOOL shiftDown;
@property (nonatomic, getter=_isExternalEvent) BOOL _externalEvent;

+ (id)_eventWithInput:(id)a0 inputFlags:(int)a1;

- (void)encodeWithCoder:(id)a0;
- (long long)_matchFidelityForKeyCommand:(id)a0 translationMap:(id)a1 additionalModifiers:(long long)a2;
- (long long)_matchFidelityFromKeyMapForKeyCommand:(id)a0 translationMap:(id)a1 translator:(id)a2 addingModifiers:(long long)a3 ignoringModifiers:(long long)a4;
- (BOOL)_shouldAttemptSecurePasteAuthentication;
- (long long)_matchFidelityForKeyCommand:(id)a0 translationMap:(id)a1;
- (id)_cloneEvent;
- (void).cxx_destruct;
- (BOOL)_isPhysicalKeyEvent;
- (void)_setHIDEvent:(struct __IOHIDEvent { } *)a0 keyboard:(struct __GSKeyboard { } *)a1;
- (long long)modifierFlags;
- (BOOL)isEqual:(id)a0;
- (void)_privatize;
- (long long)_matchFidelityForKeyCommand:(id)a0;
- (long long)type;
- (id)initWithCoder:(id)a0;

@end
