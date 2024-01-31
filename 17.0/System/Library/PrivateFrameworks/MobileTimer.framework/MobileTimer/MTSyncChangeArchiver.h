@class NSCoder;

@interface MTSyncChangeArchiver : NSKeyedArchiver <MTSerializer>

@property (readonly, nonatomic) unsigned long long mtType;
@property (readonly, nonatomic) NSCoder *mtCoder;

@end
