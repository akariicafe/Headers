@class NSString, MPCPlayerPath, MPPropertySet, ICUserIdentity;

@interface MPCPlayerRequest : MPRequest <MPCMediaRemoteMiddlewareMetadataOperationConfiguration>

@property (copy, nonatomic) MPPropertySet *playingItemProperties;
@property (copy, nonatomic) MPPropertySet *queueSectionProperties;
@property (copy, nonatomic) MPPropertySet *queueItemProperties;
@property (nonatomic) BOOL disablePlaybackStateValidation;
@property (nonatomic) BOOL disablePlaybackRateValidation;
@property (copy, nonatomic) NSString *preferredFallbackItemRelationship;
@property (retain, nonatomic) ICUserIdentity *userIdentity;
@property (retain, nonatomic) MPCPlayerPath *playerPath;
@property (nonatomic) struct { long long reverseCount; long long forwardCount; } tracklistRange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)responseClass;

- (id)init;
- (id)middlewareClasses;
- (id)_stateDumpObject;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
