@class NSString;

@interface CTPlanTransferAttributes : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long transferCapability;
@property (nonatomic) unsigned long long transferStatus;
@property (nonatomic) BOOL isSecuredFlow;
@property (retain, nonatomic) NSString *transferEndpoint;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithTransferCapability:(unsigned long long)a0 transferStatus:(unsigned long long)a1 isSecuredFlow:(BOOL)a2 transferEndpoint:(id)a3;

@end
