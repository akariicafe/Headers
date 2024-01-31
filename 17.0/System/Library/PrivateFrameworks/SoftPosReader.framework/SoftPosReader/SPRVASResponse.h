@class NSData;

@interface SPRVASResponse : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned short status;
@property (readonly, copy, nonatomic) NSData *vasData;
@property (readonly, copy, nonatomic) NSData *mobileToken;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithStatus:(unsigned short)a0 vasData:(id)a1 mobileToken:(id)a2;

@end
