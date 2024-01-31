@class NSDate;

@interface BBDismissalItem : NSObject

@property (readonly, nonatomic) unsigned long long feeds;
@property (readonly, nonatomic) NSDate *expiration;

- (id)description;
- (void).cxx_destruct;
- (BOOL)hasExpired;
- (void)addFeeds:(unsigned long long)a0;
- (id)initWithFeeds:(unsigned long long)a0;

@end
