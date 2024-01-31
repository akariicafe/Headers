@class NSURL, MIStashMetadata;

@interface MIStashedBundleContainer : MIRelocatedBundleContainer

@property (readonly, nonatomic) NSURL *stashMetadataURL;
@property (retain, nonatomic) MIStashMetadata *stashMetadata;

- (void).cxx_destruct;
- (id)newStashMetadata;
- (BOOL)saveStashMetadata:(id)a0 withError:(id *)a1;
- (id)stashMetadataWithError:(id *)a0;

@end
