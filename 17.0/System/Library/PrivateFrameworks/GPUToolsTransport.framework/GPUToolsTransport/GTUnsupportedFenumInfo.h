@class NSString;

@interface GTUnsupportedFenumInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *fenum;
@property (readonly, nonatomic) NSString *category;
@property (readonly, nonatomic) NSString *customMessage;

- (void)encodeWithCoder:(id)a0;
- (id)reason;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithFenum:(id)a0 category:(id)a1 customMessage:(id)a2;

@end
