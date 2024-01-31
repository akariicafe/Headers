@protocol OspreyRPC;

@interface OspreyService : NSObject

@property (readonly, nonatomic) id<OspreyRPC> channel;

- (id)initWithConnectionConfiguration:(id)a0;
- (void).cxx_destruct;
- (id)initWithConnectionURL:(id)a0;

@end
