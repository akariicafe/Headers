@class ADCapData;

@interface ADNewCapService : NSObject

@property (retain, nonatomic) ADCapData *capData;
@property (nonatomic) long long storageType;
@property (nonatomic) double clickExpirationThresholdInSeconds;
@property (nonatomic) double frequencyCapExpirationInSeconds;
@property (nonatomic) unsigned long long maxFrequencyCapElements;
@property (nonatomic) unsigned long long maxClickCapElements;

- (id)init;
- (void)updateFrequencyCapData:(id)a0 completionHandler:(id /* block */)a1;
- (void)cleanDownloadData;
- (id)impressionCountByLine;
- (void)updateCapData:(id)a0 forType:(long long)a1 completionHandler:(id /* block */)a2;
- (void)updateDownloadData:(id)a0 forType:(long long)a1 completionHandler:(id /* block */)a2;
- (id)initWithStorageType:(long long)a0;
- (void)updateClickData:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (id)clickCountByLine;

@end
