@class NSData, NSString;

@interface CATAddress : NSObject

@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) NSString *address;
@property (readonly, nonatomic, getter=isAny) BOOL any;
@property (readonly, nonatomic, getter=isLocalWiFi) BOOL localWiFi;

+ (id)any;
+ (id)localWiFi;

- (id)init;
- (unsigned long long)hash;
- (id)initWithData:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithString:(id)a0;
- (BOOL)isEqualToAddress:(id)a0;
- (BOOL)isEqual:(id)a0;

@end
