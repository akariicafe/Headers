@class NSString, NSMutableDictionary;

@interface FlexLocalDBSongData : NSObject

@property (readonly, nonatomic) NSString *uid;
@property (readonly, nonatomic) NSMutableDictionary *songData;

- (void).cxx_destruct;
- (id)_allRequiredKeys;
- (BOOL)_validateSongData;
- (id)initForRecordCreationWithUID:(id)a0 songData:(id)a1;
- (id)initForRecordUpdateWithUID:(id)a0 songData:(id)a1;
- (id)initWithUID:(id)a0 songData:(id)a1 shouldValidate:(BOOL)a2;

@end
