@class NSString, TVRCKeyboardAttributes;
@protocol TVRXKeyboardControllerDelegate, TVRXKeyboardImpl;

@interface TVRXKeyboardController : NSObject

@property (retain, nonatomic, getter=_keyboardImpl, setter=_setKeyboardImpl:) id<TVRXKeyboardImpl> keyboardImpl;
@property (weak, nonatomic) id<TVRXKeyboardControllerDelegate> delegate;
@property (readonly, nonatomic, getter=isEditing) BOOL editing;
@property (readonly, nonatomic) TVRCKeyboardAttributes *attributes;
@property (copy, nonatomic) NSString *text;

- (id)_init;
- (void).cxx_destruct;
- (void)_endSession;
- (void)_beginSessionWithAttributes:(id)a0;
- (void)_editingSessionBeganWithAttributes:(id)a0;
- (void)_editingSessionEnded;
- (void)_editingSessionUpdatedAttributes:(id)a0;
- (void)_editingSessionUpdatedText:(id)a0;
- (void)_textActionPayloadGenerated:(id)a0;
- (void)sendReturnKey;
- (void)sendTextActionPayload:(id)a0;

@end
