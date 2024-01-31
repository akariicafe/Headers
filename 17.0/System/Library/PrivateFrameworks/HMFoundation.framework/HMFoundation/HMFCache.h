@class NSURL;

@interface HMFCache : HMFObject

@property (class, readonly) HMFCache *defaultCache;

@property (readonly, copy) NSURL *URL;
@property (readonly, getter=isExists) BOOL exists;

- (id)init;
- (id)initWithName:(id)a0;
- (void).cxx_destruct;

@end
