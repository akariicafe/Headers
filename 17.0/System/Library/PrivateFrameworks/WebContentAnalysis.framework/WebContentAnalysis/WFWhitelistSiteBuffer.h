@class NSMutableDictionary, WCRURLList;

@interface WFWhitelistSiteBuffer : NSObject

@property (retain) NSMutableDictionary *siteTree;
@property (retain) WCRURLList *urlList;
@property unsigned long long maxSize;

- (id)init;
- (void)dealloc;
- (void)addURLString:(id)a0;
- (BOOL)containsURLString:(id)a0;
- (BOOL)treeContainsURLString:(id)a0;

@end
