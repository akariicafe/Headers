@class NSString, NSDictionary;

@interface BFMAudiobook : BFMAssetBase

@property (class, nonatomic, readonly) long long type;

@property (nonatomic, readonly) NSString *narrator;
@property (nonatomic, readonly) NSString *seriesName;
@property (nonatomic, readonly) NSDictionary *seriesInfo;

@end
