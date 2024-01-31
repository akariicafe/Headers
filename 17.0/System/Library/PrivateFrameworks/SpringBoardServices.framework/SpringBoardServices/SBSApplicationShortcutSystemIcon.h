@class NSString;

@interface SBSApplicationShortcutSystemIcon : SBSApplicationShortcutIcon

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) NSString *systemImageName;

- (void)encodeWithXPCDictionary:(id)a0;
- (unsigned long long)hash;
- (id)initWithXPCDictionary:(id)a0;
- (void).cxx_destruct;
- (id)initWithType:(long long)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithSystemImageName:(id)a0;
- (id)_initForSubclass;

@end
