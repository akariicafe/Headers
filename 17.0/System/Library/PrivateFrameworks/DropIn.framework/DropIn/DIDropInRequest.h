@class NSUUID, DIHandle, DIXPCConnectionManager;

@interface DIDropInRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) DIHandle *handle;
@property (weak, nonatomic) DIXPCConnectionManager *connectionManager;
@property (retain, nonatomic) NSUUID *existingSessionIdentifier;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithDevice:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithHandle:(id)a0 connectionManager:(id)a1;

@end
