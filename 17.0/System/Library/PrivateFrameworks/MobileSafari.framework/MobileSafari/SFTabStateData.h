@class NSString, NSData, NSDictionary;

@interface SFTabStateData : NSObject <NSCopying>

@property (copy, nonatomic) NSString *UUIDString;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *userVisibleURL;
@property (nonatomic) long long orderIndex;
@property (nonatomic) double lastViewedTime;
@property (nonatomic) long long readerViewTopScrollOffset;
@property (nonatomic) BOOL showingReader;
@property (nonatomic) BOOL displayingStandaloneImage;
@property (nonatomic) BOOL wasOpenedFromLink;
@property (nonatomic) BOOL privateBrowsing;
@property (copy, nonatomic) NSData *sessionStateData;
@property (nonatomic) long long owningBrowserWindowDatabaseID;
@property (copy, nonatomic) NSString *owningBrowserWindowUUIDString;
@property (nonatomic) BOOL skipUpdate;
@property (nonatomic) unsigned long long uncompressedSessionStateDataSize;
@property (readonly, nonatomic) BOOL isSessionStateDataCompressed;
@property (readonly, nonatomic) NSData *compressedSessionStateData;
@property (nonatomic) BOOL skipSavingSessionState;
@property (copy, nonatomic) NSString *tabGroupUUID;
@property (copy, nonatomic) NSString *profileIdentifier;
@property (nonatomic) int readingListBookmarkID;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;

+ (id)uncompressedDataWithRawData:(id)a0 uncompressedSize:(unsigned long long)a1;

- (id)initWithSQLiteRow:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_uncompressSessionStateDataIfNeeded;

@end
