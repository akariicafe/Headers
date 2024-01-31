@class NSData;

@interface _MTLPipelineStateBinary : NSObject <MTLPipelineStateBinary>

@property (readonly, retain) NSData *binary;
@property (readonly) unsigned long long uniqueIdentifier;
@property (readonly) unsigned long long debugIdentifier;

- (void)dealloc;
- (id)initWithBinary:(id)a0 uniqueIdentifier:(unsigned long long)a1;
- (id)initWithBinary:(id)a0 uniqueIdentifier:(unsigned long long)a1 debugIdentifier:(unsigned long long)a2;

@end
