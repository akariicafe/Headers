@class NSString, IMSenderContext_Impl;

@interface IMSenderContext : NSObject <NSSecureCoding> {
    IMSenderContext_Impl *swiftImpl;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL isTrustedSender;
@property (readonly, nonatomic) BOOL isFromMe;
@property (readonly, nonatomic) NSString *serviceName;

+ (id)contextWithKnownSender:(BOOL)a0;
+ (id)contextWithKnownSender:(BOOL)a0 serviceName:(id)a1;
+ (id)businessChatContext;
+ (id)businessChatContextWithServiceName:(id)a0;
+ (id)fromMeContext;
+ (id)fromMeContextWithServiceName:(id)a0;
+ (id)untrustedContext;
+ (id)untrustedContextWithServiceName:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithSenderContext_Impl:(id)a0;

@end
