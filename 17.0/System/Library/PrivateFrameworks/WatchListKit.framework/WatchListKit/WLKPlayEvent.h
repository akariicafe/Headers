@class NSString, NSDate;

@interface WLKPlayEvent : NSObject

@property (readonly, copy, nonatomic) NSString *bundleID;
@property (readonly, copy, nonatomic) NSString *channelID;
@property (readonly, copy, nonatomic) NSString *externalPlayableID;
@property (readonly, copy, nonatomic) NSString *showID;
@property (readonly, nonatomic, getter=isPlayed) BOOL played;
@property (readonly, nonatomic) double elapsedTime;
@property (readonly, nonatomic) double duration;
@property (readonly, copy, nonatomic) NSDate *occurrenceDate;

- (id)init;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
