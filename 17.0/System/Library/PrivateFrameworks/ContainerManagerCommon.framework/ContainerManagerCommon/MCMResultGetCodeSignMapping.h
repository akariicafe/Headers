@class NSDictionary;

@interface MCMResultGetCodeSignMapping : MCMResultBase

@property (readonly, nonatomic) NSDictionary *info;

- (void).cxx_destruct;
- (BOOL)encodeResultOntoReply:(id)a0;
- (id)initWithInfo:(id)a0;

@end
