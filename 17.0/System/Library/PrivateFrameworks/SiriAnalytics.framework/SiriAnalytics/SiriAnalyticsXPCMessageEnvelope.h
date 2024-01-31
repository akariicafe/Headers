@class NSData;

@interface SiriAnalyticsXPCMessageEnvelope : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ payload;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) void /* unknown type, empty encoding */ eventTypeId;
@property (nonatomic, readonly) NSData *payload;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithEventTypeId:(long long)a0 payload:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
