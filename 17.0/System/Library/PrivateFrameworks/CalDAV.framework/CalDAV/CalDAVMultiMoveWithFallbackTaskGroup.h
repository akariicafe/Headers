@class NSDictionary, NSMutableDictionary;

@interface CalDAVMultiMoveWithFallbackTaskGroup : CoreDAVMultiMoveWithFallbackTaskGroup

@property (retain, nonatomic) NSDictionary *sourceEntityScheduleTags;
@property (nonatomic) BOOL isAutoScheduleSupported;
@property (retain, nonatomic) NSMutableDictionary *destinationEntityScheduleTags;

- (void).cxx_destruct;
- (void)_setTagsForDestinationEntityAtURL:(id)a0 fromTaskResponseHeaders:(id)a1 completionBlock:(id /* block */)a2;
- (void)_completedPropFindTask:(id)a0 intermediateETag:(id)a1 intermediateScheduleTag:(id)a2 destinationFilename:(id)a3;
- (id)initWithSourceURLs:(id)a0 destinationURL:(id)a1 overwrite:(BOOL)a2 useFallback:(BOOL)a3 sourceEntityDataPayloads:(id)a4 sourceEntityDataContentTypes:(id)a5 sourceEntityETags:(id)a6 sourceEntityScheduleTags:(id)a7 accountInfoProvider:(id)a8 taskManager:(id)a9 isAutoScheduleSupported:(BOOL)a10;

@end
