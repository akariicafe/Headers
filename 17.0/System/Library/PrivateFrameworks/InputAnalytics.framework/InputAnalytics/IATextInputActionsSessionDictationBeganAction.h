@interface IATextInputActionsSessionDictationBeganAction : IATextInputActionsSessionAction

@property (nonatomic) unsigned long long dictationBeganCount;
@property (nonatomic) unsigned long long modelessUsedAtLeastOnceCount;
@property (nonatomic) unsigned long long multiModalDictationBeganCount;

- (id)description;
- (long long)inputActionCount;
- (long long)mergeActionIfPossible:(id)a0;

@end
