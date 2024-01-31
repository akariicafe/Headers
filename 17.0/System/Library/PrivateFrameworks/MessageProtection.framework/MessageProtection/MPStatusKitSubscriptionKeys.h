@class NSData;

@interface MPStatusKitSubscriptionKeys : NSObject

@property (readonly, nonatomic) unsigned short index;
@property (readonly, nonatomic) NSData *chainKey;
@property (readonly, nonatomic) NSData *signingKey;

- (void).cxx_destruct;
- (id)initWithIndex:(unsigned short)a0 chainKey:(id)a1 signingKey:(id)a2;

@end
