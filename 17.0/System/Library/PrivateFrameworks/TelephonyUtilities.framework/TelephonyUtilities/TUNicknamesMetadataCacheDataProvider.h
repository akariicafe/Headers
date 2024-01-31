@class NSString, IMNicknameProvider;

@interface TUNicknamesMetadataCacheDataProvider : TUMetadataCacheDataProvider <IMNicknameListener>

@property (class, readonly, nonatomic) TUNicknamesMetadataCacheDataProvider *sharedInstance;

@property (readonly, nonatomic) IMNicknameProvider *nicknameProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tuMetadataDestinationIDForHandleValue:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)updateCacheWithDestinationIDs:(id)a0 withGroup:(id)a1;
- (void)nicknameStoreDidChange:(id)a0;
- (id)fetchNicknameForHandleValue:(id)a0;
- (id)formattedNicknameStringForHandleValue:(id)a0;
- (id)formattedNicknameStringForNickname:(id)a0;

@end
