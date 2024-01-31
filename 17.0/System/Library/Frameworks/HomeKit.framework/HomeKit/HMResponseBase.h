@class HMRequestBase, NSError;
@protocol NSCopying, NSObject;

@interface HMResponseBase : NSObject

@property (readonly, nonatomic) HMRequestBase *request;
@property (readonly, nonatomic) id<NSCopying, NSObject> value;
@property (readonly, nonatomic) NSError *error;

- (void)setRequest:(id)a0;
- (void).cxx_destruct;
- (id)initWithRequest:(id)a0 error:(id)a1;
- (id)initWithRequest:(id)a0 value:(id)a1 error:(id)a2;

@end
