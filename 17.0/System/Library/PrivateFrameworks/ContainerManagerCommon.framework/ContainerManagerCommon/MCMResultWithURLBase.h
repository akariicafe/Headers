@class NSURL, NSString, MCMError;

@interface MCMResultWithURLBase : MCMResultBase <MCMResultWithURL>

@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) NSString *path;
@property (readonly, nonatomic) const char *sandboxToken;
@property (readonly, nonatomic) BOOL existed;
@property (readonly, nonatomic) MCMError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithPath:(id)a0 existed:(BOOL)a1 sandboxToken:(const char *)a2;
- (id)initWithURL:(id)a0 existed:(BOOL)a1 sandboxToken:(const char *)a2;
- (void).cxx_destruct;
- (BOOL)encodeResultOntoReply:(id)a0;

@end
