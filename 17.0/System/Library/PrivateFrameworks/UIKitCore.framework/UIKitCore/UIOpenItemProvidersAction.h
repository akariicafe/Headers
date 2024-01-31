@interface UIOpenItemProvidersAction : BSAction

- (id)keyDescriptionForSetting:(unsigned long long)a0;
- (long long)UIActionType;
- (id)continuationEndpoint;
- (id)initWithDragContinuationEndpoint:(id)a0;
- (id)initWithInfo:(id)a0 responder:(id)a1;
- (unsigned long long)providerSource;

@end
