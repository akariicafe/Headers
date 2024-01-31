@class NSString;

@interface PKSandboxExtension : NSObject

@property (readonly, nonatomic) NSString *token;
@property long long handle;

- (id)initWithExtension:(id)a0;
- (void)dealloc;
- (void)consume;
- (void).cxx_destruct;
- (void)expel;
- (BOOL)isEqual:(id)a0;

@end
