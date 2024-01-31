@class NSArray, PRSWidget;

@interface PREditingDidDismissAction : BSAction

@property (readonly, nonatomic) BOOL userAcceptedChanges;
@property (readonly, nonatomic) NSArray *graphicComplications;
@property (readonly, nonatomic) PRSWidget *inlineComplication;

+ (id)cancelAction;
+ (id)acceptChangesWithCompletion:(id /* block */)a0;

- (id)keyDescriptionForSetting:(unsigned long long)a0;
- (id)valueDescriptionForFlag:(long long)a0 object:(id)a1 ofSetting:(unsigned long long)a2;
- (void).cxx_destruct;
- (id)_initWithCompletion:(id /* block */)a0;
- (void)sendResponseWithUpdatedConfiguration:(id)a0 updatedProperties:(id)a1;

@end
