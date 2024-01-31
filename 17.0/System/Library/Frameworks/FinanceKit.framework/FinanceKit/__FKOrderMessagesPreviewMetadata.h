@interface __FKOrderMessagesPreviewMetadata : NSObject

@property (nonatomic, readonly) void /* unknown type, empty encoding */ image;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ backgroundColor;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ primaryText;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ secondaryText;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ tertiaryText;

+ (id)createWalletDeepLinkForExistingOrderAt:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithOrderData:(id)a0 workingDirectory:(id)a1 error:(id *)a2;
- (id)initWithOrderData:(id)a0 error:(id *)a1;

@end
