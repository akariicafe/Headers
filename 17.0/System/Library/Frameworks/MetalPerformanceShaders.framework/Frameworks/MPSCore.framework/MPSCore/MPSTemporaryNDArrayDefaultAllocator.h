@class NSString;

@interface MPSTemporaryNDArrayDefaultAllocator : MPSNDArrayDefaultAllocator <MPSNDArrayAllocator>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCoder:(id)a0;
- (id)arrayForCommandBuffer:(id)a0 arrayDescriptor:(id)a1 kernel:(id)a2;

@end
