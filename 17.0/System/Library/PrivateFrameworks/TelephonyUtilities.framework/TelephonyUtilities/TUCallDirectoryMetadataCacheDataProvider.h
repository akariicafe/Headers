@class CXCallDirectoryManager;

@interface TUCallDirectoryMetadataCacheDataProvider : TUMetadataCacheDataProvider

@property (readonly, nonatomic) CXCallDirectoryManager *callDirectoryManager;
@property (readonly, nonatomic) int identificationEntriesChangedNotifyToken;
@property (copy, nonatomic) id /* block */ countryDialingCode;
@property (copy, nonatomic) id /* block */ firstIdentificationEntriesForEnabledExtensions;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)updateCacheWithDestinationIDs:(id)a0 withGroup:(id)a1;

@end
