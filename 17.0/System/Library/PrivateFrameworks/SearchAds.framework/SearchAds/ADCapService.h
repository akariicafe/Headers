@class ADCapData;

@interface ADCapService : NSObject

@property (retain, nonatomic) ADCapData *capData;

- (id)init;
- (void)updateFrequencyCapData:(id)a0 completionHandler:(id /* block */)a1;
- (void)cleanDownloadData;
- (id)impressionCountByLine;
- (void)updateCapData:(id)a0 forType:(long long)a1 completionHandler:(id /* block */)a2;
- (void)updateClickData:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (id)clickCountByLine;
- (void)updateDownloadData:(id)a0 identifier:(id)a1 forType:(long long)a2 completionHandler:(id /* block */)a3;

@end
