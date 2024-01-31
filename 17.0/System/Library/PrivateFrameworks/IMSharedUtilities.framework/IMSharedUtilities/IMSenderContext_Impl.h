@class NSString;

@interface IMSenderContext_Impl : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ isKnownSender;
    void /* unknown type, empty encoding */ serviceName;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) void /* unknown type, empty encoding */ isFromMe;
@property (nonatomic, readonly) BOOL isTrustedSender;
@property (nonatomic, readonly) NSString *serviceName;

+ (id)contextWithKnownSender:(BOOL)a0;
+ (id)contextWithKnownSender:(BOOL)a0 serviceName:(id)a1;
+ (id)businessChatContext;
+ (id)businessChatContextWithServiceName:(id)a0;
+ (id)fromMeContext;
+ (id)fromMeContextWithServiceName:(id)a0;
+ (id)untrustedContext;
+ (id)untrustedContextWithServiceName:(id)a0;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
