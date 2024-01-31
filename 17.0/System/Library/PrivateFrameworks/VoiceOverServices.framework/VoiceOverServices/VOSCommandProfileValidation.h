@class NSString, VOSCommand;

@interface VOSCommandProfileValidation : NSObject {
    long long _validationType;
}

@property (readonly, nonatomic) BOOL isSuccessful;
@property (readonly, nonatomic) BOOL isGestureAlreadyAssignedToCommand;
@property (readonly, nonatomic) BOOL isGestureAssignedToOtherCommand;
@property (readonly, nonatomic) BOOL isKeyboardShortcutAlreadyAssignedToCommand;
@property (readonly, nonatomic) BOOL isKeyboardShortcutAssignedToOtherCommand;
@property (readonly, nonatomic) NSString *localizedErrorTitle;
@property (readonly, nonatomic) NSString *localizedErrorMessage;
@property (retain, nonatomic) VOSCommand *previouslyBoundCommand;

+ (id)gestureAssignedToOtherCommandValidation:(id)a0;
+ (id)gestureIsRequiredValidation;
+ (id)keyboardShortcutAssignedToOtherCommandValidation:(id)a0;
+ (id)successfulValidation;

- (id)init;
- (void).cxx_destruct;
- (id)initWithType:(long long)a0;

@end
