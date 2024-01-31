@class NSString, NSBundle;

@interface SFSSymbolAssetInfo : NSObject

@property (readonly) NSString *name;
@property (readonly) NSBundle *bundle;
@property (readonly) long long bundleType;

+ (id)infoForName:(id)a0 allowsPrivate:(BOOL)a1 locale:(id)a2;
+ (id)localeAgnosticInfo:(id)a0 allowsPrivate:(BOOL)a1;
+ (id)localeSpecificInfo:(id)a0 locale:(id)a1;

- (void).cxx_destruct;
- (id)initWithName:(id)a0 bundle:(id)a1 andType:(long long)a2;

@end
