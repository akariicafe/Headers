@class NSArray, NSDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface AVTaggedVideoOutputSpecification : NSObject {
    NSArray *_tagCollections;
    struct __CFDictionary { } *_tagCollectionPixelBufferAttributesMapping;
    NSDictionary *_defaultPixelBufferAttrbiutes;
    NSObject<OS_dispatch_queue> *_ivarAccessQueue;
}

@property (readonly, copy, nonatomic) NSArray *preferredTagCollections;
@property (copy, nonatomic) NSDictionary *defaultPixelBufferAttributes;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithTagCollections:(id)a0;
- (id)pixelBufferAttributesForTagCollection:(struct OpaqueCMTagCollection { } *)a0;
- (void)setOutputPixelBufferAttributes:(id)a0 forTagCollection:(struct OpaqueCMTagCollection { } *)a1;
- (BOOL)setupWithTagCollections:(id)a0 exceptionReasonOut:(id *)a1;

@end
