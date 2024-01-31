@interface _UIPhysicalKeyTranslator : NSObject

@property (readonly, nonatomic) struct __GSKeyboard { } *keyboardRef;

- (id)layoutName;
- (void)dealloc;
- (int)HIDUsageCodeForCharacter:(unsigned short)a0 modifiers:(long long)a1;
- (id)initWithGSKeyboard:(struct __GSKeyboard { } *)a0;
- (id)translationForHIDUsageCode:(unsigned short)a0 modifiers:(long long)a1;

@end
