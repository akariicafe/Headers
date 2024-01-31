@class NSDictionary, NSUserDefaults;

@interface ANDefaults : NSObject <ANDefaultsProtocol>

@property (retain, nonatomic) NSUserDefaults *defaults;
@property (readonly, nonatomic) NSDictionary *defaultsItems;

+ (id)sharedInstance;

- (id)init;
- (id)objectForDefault:(id)a0;
- (void)setBool:(BOOL)a0 forDefault:(id)a1;
- (void)setObject:(id)a0 forDefault:(id)a1;
- (void)setNumber:(id)a0 forDefault:(id)a1;
- (void).cxx_destruct;
- (BOOL)boolForDefault:(id)a0;
- (id)numberForDefault:(id)a0;

@end
