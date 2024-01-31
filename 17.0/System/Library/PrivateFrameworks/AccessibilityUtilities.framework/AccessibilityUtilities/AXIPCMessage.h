@class NSDictionary, NSString;

@interface AXIPCMessage : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int key;
@property (copy, nonatomic) NSDictionary *payload;
@property (nonatomic) unsigned int clientPort;
@property (nonatomic) struct { unsigned int val[8]; } auditToken;
@property (nonatomic) unsigned long long uniqueID;
@property (readonly, copy, nonatomic) NSString *senderBundleId;
@property (nonatomic) BOOL processedMessage;

+ (id)archivedMessageFromData:(id)a0;

- (id)initWithKey:(int)a0 payload:(id)a1;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithKey:(int)a0;
- (id)initWithKey:(int)a0 payload:(id)a1 keyDebugInfo:(id)a2;
- (id)initWithCoder:(id)a0;

@end
