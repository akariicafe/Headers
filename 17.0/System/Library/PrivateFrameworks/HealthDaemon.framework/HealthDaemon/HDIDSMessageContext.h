@class NSString, IDSMessageContext;

@interface HDIDSMessageContext : NSObject {
    IDSMessageContext *_context;
}

@property (readonly, copy, nonatomic) NSString *originalGUID;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithMessageContext:(id)a0;

@end
