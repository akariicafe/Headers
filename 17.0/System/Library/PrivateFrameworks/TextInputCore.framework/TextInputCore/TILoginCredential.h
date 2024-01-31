@class NSString;

@interface TILoginCredential : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *username;
@property (readonly, nonatomic) NSString *password;
@property (readonly, nonatomic) NSString *site;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithUsername:(id)a0 password:(id)a1 site:(id)a2;

@end
