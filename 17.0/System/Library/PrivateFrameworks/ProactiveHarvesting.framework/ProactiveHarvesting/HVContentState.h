@class NSSet;

@interface HVContentState : NSObject <NSCopying, NSMutableCopying> {
    NSSet *_consumers;
    unsigned char _levelOfService;
}

- (id)init;
- (unsigned long long)hash;
- (unsigned char)levelOfService;
- (id)initWithConsumers:(id)a0 levelOfService:(unsigned char)a1;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)consumers;
- (id)_initWithConsumers:(id)a0 levelOfService:(unsigned char)a1;

@end
