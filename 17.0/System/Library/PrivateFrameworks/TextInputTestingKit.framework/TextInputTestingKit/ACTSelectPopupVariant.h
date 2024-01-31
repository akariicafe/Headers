@class NSString;

@interface ACTSelectPopupVariant : ACTUserAction

@property (readonly, nonatomic) NSString *intendedKey;
@property (readonly, nonatomic) double timestamp;

- (id)description;
- (void).cxx_destruct;
- (void)applyWithTyper:(id)a0 log:(id)a1;
- (id)initWithIntendedKey:(id)a0 timestamp:(double)a1;

@end
