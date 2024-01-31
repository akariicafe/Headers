@class NSNumber;

@interface AMSHTTPArchiveController : NSObject

@property (class, nonatomic, getter=isRemoveDisabled) BOOL removeDisabled;
@property (class, retain, nonatomic) NSNumber *maxBufferSizeOverride;

+ (id)_harURLFilters;
+ (void)initialize;
+ (id)harURLFilters;
+ (void)addHTTPArchive:(id)a0;
+ (void)_updateHarFileFilters;
+ (BOOL)_shouldAddRequest:(id)a0;
+ (BOOL)_disabled;

@end
