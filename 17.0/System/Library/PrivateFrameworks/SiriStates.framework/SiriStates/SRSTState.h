@class NSString, _SRSTState;

@interface SRSTState : NSObject

@property (class, readonly, nonatomic) SRSTState *analyzing;
@property (class, readonly, nonatomic) SRSTState *resting;
@property (class, readonly, nonatomic) SRSTState *available;
@property (class, readonly, nonatomic) SRSTState *postResponse;
@property (class, readonly, nonatomic) SRSTState *understanding;
@property (class, readonly, nonatomic) SRSTState *responding;
@property (class, readonly, nonatomic) SRSTState *disabled;
@property (class, readonly, nonatomic) SRSTState *processing;

@property (readonly) _SRSTState *underlyingObject;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned long long hash;

+ (id)new;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)makeProxy;
- (id)initWithUnderlyingObject:(id)a0;

@end
