@class NSString;

@interface SBPreferenceChangeDodgingModifierEvent : SBDodgingModifierEvent

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) unsigned long long phase;
@property (readonly, nonatomic) unsigned long long style;

- (void).cxx_destruct;
- (unsigned long long)type;
- (id)initWithIdentifier:(id)a0 phase:(unsigned long long)a1 style:(unsigned long long)a2;

@end
