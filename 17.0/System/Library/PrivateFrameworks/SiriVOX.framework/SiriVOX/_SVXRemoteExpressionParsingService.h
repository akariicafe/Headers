@class NSString;
@protocol SVXAceCommandHandling;

@interface _SVXRemoteExpressionParsingService : NSObject <SVXExpressionParsingServing>

@property (retain, nonatomic) id<SVXAceCommandHandling> aceHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithAceHandler:(id)a0;
- (void)parseExpressions:(id)a0 targetDevice:(id)a1 reply:(id /* block */)a2;

@end
