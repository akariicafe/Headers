@class CKContainer;

@interface CKSoftLinkAssetFetch : NSObject

@property (retain, nonatomic) CKContainer *container;

- (void).cxx_destruct;
- (void)fetchAssetWithTeamID:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (void)setContainerPtr:(id)a0;

@end
