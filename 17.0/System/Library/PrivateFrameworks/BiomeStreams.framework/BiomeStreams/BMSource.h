@class NSString;

@interface BMSource : NSObject <BMSourceProtocol>

@property (readonly, nonatomic) NSString *identifier;

+ (id)new;

- (id)initWithIdentifier:(id)a0;
- (id)init;
- (void)sendEvent:(id)a0 timestamp:(double)a1;
- (void)sendEvent:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
