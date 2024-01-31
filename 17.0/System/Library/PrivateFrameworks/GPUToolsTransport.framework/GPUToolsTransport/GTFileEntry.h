@class NSString;

@interface GTFileEntry : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *path;
@property (readonly, nonatomic) NSString *destination;
@property (readonly, nonatomic) unsigned long long fileSize;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithLink:(id)a0 destination:(id)a1;
- (id)initWithPath:(id)a0 fileSize:(unsigned long long)a1;

@end
