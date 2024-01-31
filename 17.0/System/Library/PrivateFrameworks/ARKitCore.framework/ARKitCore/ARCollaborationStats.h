@interface ARCollaborationStats : NSObject

@property (nonatomic) unsigned long long localSessionIdentifier;
@property (nonatomic) unsigned long long mergedKeyframesCount;
@property (nonatomic) unsigned long long remainingKeyframesCount;
@property (nonatomic) unsigned long long remainingWeakKeyframesCount;
@property (nonatomic) unsigned long long externalKeyframesCount;
@property (nonatomic) unsigned long long externalWeakKeyframesCount;
@property (nonatomic) unsigned long long anchorsCount;
@property (nonatomic) BOOL originAnchorMerged;

@end
