@class NSString;

@interface SREMusicMetadata : NSObject

@property (nonatomic) long long adamID;
@property (nonatomic) long long artistAdamID;
@property (nonatomic) long long albumAdamID;
@property (retain, nonatomic) NSString *genreID;

- (id)init;
- (void).cxx_destruct;

@end
