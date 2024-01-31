@class NSString, NSMutableArray;

@interface OKMediaCluster : NSObject

@property (copy, nonatomic) NSString *title;
@property (readonly, retain, nonatomic) NSMutableArray *items;
@property (nonatomic) BOOL isUnknown;

- (id)init;
- (void)dealloc;
- (id)uniqueURLs;

@end
