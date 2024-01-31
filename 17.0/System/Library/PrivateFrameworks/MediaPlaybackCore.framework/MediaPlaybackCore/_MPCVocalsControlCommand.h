@class NSString;

@interface _MPCVocalsControlCommand : _MPCPlayerCommand <MPCVocalsControlCommand>

@property (nonatomic, getter=isActive) BOOL active;
@property (nonatomic) float level;
@property (nonatomic) float minLevel;
@property (nonatomic) float maxLevel;
@property (nonatomic, getter=isContinuous) BOOL continuous;
@property (nonatomic, getter=isDisabled) BOOL disabled;
@property (nonatomic) long long disabledReason;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)setVocalsLevel:(float)a0;
- (id)activateVocalsControl:(BOOL)a0;

@end
