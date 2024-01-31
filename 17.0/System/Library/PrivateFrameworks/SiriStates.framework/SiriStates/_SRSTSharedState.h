@class NSString;

@interface _SRSTSharedState : NSObject {
    void /* unknown type, empty encoding */ name;
    void /* unknown type, empty encoding */ parent;
    void /* unknown type, empty encoding */ eventHandler;
}

@property (class, nonatomic, readonly) _SRSTSharedState *passive;
@property (class, nonatomic, readonly) _SRSTSharedState *preparingToServe;
@property (class, nonatomic, readonly) _SRSTSharedState *unshared;
@property (class, nonatomic, readonly) _SRSTSharedState *serving;

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long hash;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)makeProxy;

@end
