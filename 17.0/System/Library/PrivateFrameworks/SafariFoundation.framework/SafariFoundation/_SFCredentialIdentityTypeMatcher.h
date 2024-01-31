@interface _SFCredentialIdentityTypeMatcher : NSObject

@property (readonly, nonatomic) BOOL matchAllTypes;
@property (readonly, nonatomic) long long typeToMatch;

+ (id)allTypes;
+ (id)singleType:(long long)a0;

@end
