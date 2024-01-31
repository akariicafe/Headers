@class NSString;

@interface PKTextInputKeyboardSuppressionPolicyDelegate : NSObject <_UIKeyboardSuppressionPolicyDelegate, PKTextInputSupportedElementDelegate> {
    BOOL _isQueryingLocaleIdentifier;
}

@property (nonatomic) BOOL _suppressLocaleIdentifier;
@property (nonatomic) BOOL isFloatingKeyboardVisible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_recognitionLocaleIdentifier;
- (BOOL)_shouldSuppressAssistantBarForDelegate:(id)a0;
- (BOOL)_shouldSuppressForDelegate:(id)a0;
- (void)updateKeyboardSuppressionPolicy;
- (BOOL)_shouldSuppressKeyboardUIForDelegate:(id)a0 checkSource:(BOOL)a1;
- (BOOL)isSupportedForTextInputTraits:(id)a0;

@end
