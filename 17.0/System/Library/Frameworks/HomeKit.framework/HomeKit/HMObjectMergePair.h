@protocol HMObjectMerge;

@interface HMObjectMergePair : NSObject

@property (readonly) id<HMObjectMerge> oldObject;
@property (readonly) id<HMObjectMerge> updatedObject;

- (void).cxx_destruct;
- (id)initWithOldObject:(id)a0 updatedObject:(id)a1;

@end
