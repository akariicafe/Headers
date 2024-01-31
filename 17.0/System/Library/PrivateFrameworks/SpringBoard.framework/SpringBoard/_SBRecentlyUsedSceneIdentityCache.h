@class NSString, NSMutableDictionary, NSMutableOrderedSet;

@interface _SBRecentlyUsedSceneIdentityCache : NSObject <BSDescriptionStreamable, NSCopying> {
    NSMutableDictionary *_recentSceneIdentityTokensByPID;
    NSMutableOrderedSet *_recentPIDs;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)promoteContainedSceneIdentityToken:(id)a0 forPID:(int)a1;
- (id)init;
- (void)addSceneIdentityToken:(id)a0 forPID:(int)a1;
- (void)removeSceneIdentityToken:(id)a0 forPID:(int)a1;
- (void)appendDescriptionToFormatter:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
