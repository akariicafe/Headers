@class NSString;

@interface SFAirDropTransferItem : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *type;
@property (readonly, copy, nonatomic) NSString *subtype;
@property (readonly, nonatomic) long long count;
@property (readonly, nonatomic) BOOL isFile;

- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void)incrementCount;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithType:(id)a0 isFile:(BOOL)a1;
- (id)initWithType:(id)a0 subtype:(id)a1 isFile:(BOOL)a2;

@end
