@class GEOTileRequester, GEOTileKeyList;

@interface GEOTileServerLocalProxyBatchContext : NSObject

@property (retain, nonatomic) GEOTileKeyList *fullList;
@property (retain, nonatomic) GEOTileKeyList *interestList;
@property (retain, nonatomic) GEOTileKeyList *requesterList;
@property (retain, nonatomic) GEOTileKeyList *pendingRequesterList;
@property (retain, nonatomic) GEOTileKeyList *cacheMissNoDataList;
@property (retain, nonatomic) GEOTileKeyList *cacheMissStaleDataList;
@property (retain, nonatomic) GEOTileKeyList *cacheMissStaleUnusableDataList;
@property (nonatomic) unsigned char loadReason;
@property (nonatomic) BOOL proactivelyLoadOnFailure;
@property (retain, nonatomic) GEOTileRequester *tileRequester;

- (void).cxx_destruct;

@end
