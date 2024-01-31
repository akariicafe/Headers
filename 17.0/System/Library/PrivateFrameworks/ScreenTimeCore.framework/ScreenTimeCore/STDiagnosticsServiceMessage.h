@class NSString, NSSet;

@interface STDiagnosticsServiceMessage : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSString *messageType;
@property (retain) NSString *sender;
@property (retain) NSSet *recipients;
@property (retain) NSString *payloadUUID;
@property long long idsInterface;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithMessageType:(id)a0 sender:(id)a1 recipients:(id)a2 payloadUUID:(id)a3 idsInterface:(long long)a4;

@end
