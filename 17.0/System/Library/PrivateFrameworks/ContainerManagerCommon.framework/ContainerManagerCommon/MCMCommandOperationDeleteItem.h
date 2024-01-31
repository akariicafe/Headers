@class NSSet;
@protocol MCMMetadata, MCMDeleteManifest;

@interface MCMCommandOperationDeleteItem : NSObject

@property (readonly, nonatomic) id<MCMMetadata> metadata;
@property (readonly, nonatomic) NSSet *codeSignIdentifiersToRemove;
@property (retain, nonatomic) id<MCMDeleteManifest> manifest;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithMetadata:(id)a0 codeSignIdentifiersToRemove:(id)a1 manifest:(id)a2;

@end
