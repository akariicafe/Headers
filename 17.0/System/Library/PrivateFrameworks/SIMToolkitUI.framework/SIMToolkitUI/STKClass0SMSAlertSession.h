@interface STKClass0SMSAlertSession : STKAlertSession

@property (readonly, nonatomic) long long slot;

+ (BOOL)_requiresResponseProvider;

- (id)initWithLogger:(id)a0 responseProvider:(id)a1 options:(id)a2 sound:(id)a3;
- (id)initWithLogger:(id)a0 responseProvider:(id)a1 options:(id)a2 sound:(id)a3 slot:(long long)a4;

@end
