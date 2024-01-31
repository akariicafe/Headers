@class NSString;

@interface TRAArbitrationKeyboardInputs : NSObject <NSCopying, BSDescriptionProviding>

@property (readonly, copy, nonatomic) NSString *focusedParticipantUniqueIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithKeyboardFocusedParticipantUniqueIdentifier:(id)a0;
- (BOOL)isEqualToTraitsArbitrationKeyboardInputs:(id)a0;

@end
