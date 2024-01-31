@class NSString;

@interface MTUPPMetadata : NSManagedObject

@property (retain, nonatomic) NSString *metadataIdentifier;
@property (nonatomic) double timestamp;
@property (nonatomic) double bookmarkTime;
@property (nonatomic) BOOL hasBeenPlayed;
@property (nonatomic) long long playCount;

@end
