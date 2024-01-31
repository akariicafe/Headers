@protocol VUIAppUserDefaultsStoring;

@interface VUIJSUserDefaults : VUIJSObject <VUIJSUserDefaults>

@property (weak, nonatomic) id<VUIAppUserDefaultsStoring> userDefaultsStorage;

- (void).cxx_destruct;
- (void)removeData:(id)a0;
- (id)getData:(id)a0;
- (id)initWithAppContext:(id)a0 userDefaultsStorage:(id)a1;
- (void)setData:(id)a0 :(id)a1;

@end
