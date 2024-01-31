@class UNNotificationResponse;

@interface UISNotificationResponseAction : BSAction

@property (readonly, retain, nonatomic) UNNotificationResponse *response;
@property (readonly, nonatomic) BOOL isLocal;
@property (readonly, nonatomic) BOOL isRemote;
@property (readonly, nonatomic) BOOL isDefaultAction;

- (id)keyDescriptionForSetting:(unsigned long long)a0;
- (id)valueDescriptionForFlag:(long long)a0 object:(id)a1 ofSetting:(unsigned long long)a2;
- (long long)UIActionType;
- (id)initWithXPCDictionary:(id)a0;
- (BOOL)isKindOfClass:(Class)a0;
- (void).cxx_destruct;
- (id)_trigger;
- (id)initWithResponse:(id)a0 withHandler:(id /* block */)a1;

@end
