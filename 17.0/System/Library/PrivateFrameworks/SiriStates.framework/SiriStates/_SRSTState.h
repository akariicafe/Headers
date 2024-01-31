@class NSString;

@interface _SRSTState : NSObject {
    void /* unknown type, empty encoding */ name;
    void /* unknown type, empty encoding */ parent;
    void /* unknown type, empty encoding */ eventHandler;
}

@property (class, nonatomic, readonly) _SRSTState *resting;
@property (class, nonatomic, readonly) _SRSTState *responding;
@property (class, nonatomic, readonly) _SRSTState *available;
@property (class, nonatomic, readonly) _SRSTState *postResponse;
@property (class, nonatomic, readonly) _SRSTState *disabled;
@property (class, nonatomic, readonly) _SRSTState *analyzing;
@property (class, nonatomic, readonly) _SRSTState *understanding;
@property (class, nonatomic, readonly) _SRSTState *processing;

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long hash;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)makeProxy;

@end
