@class NSString, SAMLAuthZDecisionQueryElement;

@interface SAMLAuthZDecisionQuery : XMLWrapperDoc

@property (retain, nonatomic) SAMLAuthZDecisionQueryElement *requestElement;
@property (readonly, nonatomic) NSString *channelId;

- (void)addAction:(id)a0;
- (void)setResource:(id)a0;
- (void).cxx_destruct;
- (id)initWithData:(id)a0 schema:(id)a1 error:(id *)a2;
- (id)initWithElement:(id)a0 schema:(id)a1 error:(id *)a2;
- (void)setSubjectFromResponse:(id)a0;

@end
