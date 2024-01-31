@class NSString, NSDictionary;

@interface ICURLBagLibraryDAAPConfiguration : NSObject {
    NSDictionary *_bagDictionary;
}

@property (readonly, nonatomic) long long databaseID;
@property (readonly, nonatomic) NSString *databaseName;
@property (readonly, nonatomic) NSString *baseURL;
@property (readonly, nonatomic, getter=isOnlineGeniusForMatchEnabled) BOOL onlineGeniusForMatchEnabled;
@property (readonly, nonatomic) long long playDataBatchIntervalInMinutes;
@property (readonly, nonatomic) long long subscribedContainerPollingFrequencySeconds;
@property (readonly, nonatomic) long long updatePollingFrequencySeconds;
@property (readonly, nonatomic) long long autoUpdatePollingFrequencySeconds;
@property (readonly, nonatomic) unsigned long long maxSyncRetryIntervalSeconds;

- (id)description;
- (void).cxx_destruct;
- (id)initWithBagLibraryDAAPDictionary:(id)a0;

@end
