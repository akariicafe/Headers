@class NSString, CNAvatarImageRenderer;

@interface ASKLoadContactResourceOperation : ASKLoadResourceOperation

@property (retain, nonatomic) CNAvatarImageRenderer *monogrammer;
@property (readonly, copy, nonatomic) NSString *contactId;

+ (double)mainScreenScale;
+ (id)supportedScheme;

- (void)main;
- (id)initWithURLRequest:(id)a0 dataConsumer:(id)a1;
- (void).cxx_destruct;
- (id)initWithContactId:(id)a0;
- (id)makeFetchError;
- (id)makePlatformUnsupportedError;

@end
