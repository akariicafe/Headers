@class NSString;

@interface PTRestoreDefaultSettingsRowAction : PTRowAction

@property (readonly, nonatomic) NSString *settingsKeyPath;

+ (BOOL)supportsSecureCoding;
+ (id)action;
+ (id)actionWithSettingsKeyPath:(id)a0;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id /* block */)defaultHandler;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;

@end
