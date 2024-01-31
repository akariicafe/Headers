@interface WLKPlayableUtilities : NSObject

+ (BOOL)_openPunchoutURL:(id)a0 isPlaybackURL:(BOOL)a1;
+ (id)_defaultOpenPunchoutURLWithPlayable:(id)a0;
+ (id)_defaultPlayPunchoutURLWithPlayable:(id)a0;
+ (id)_defaultPunchoutURLWithPlayable:(id)a0 URLKey:(id)a1;
+ (id)_defaultPunchoutURLWithPlayable:(id)a0 isPlaybackURL:(BOOL *)a1;
+ (BOOL)_openITunesPlayableWatchListAppAvailable:(id)a0 forContentType:(unsigned long long)a1 canonicalID:(id)a2 showCanonicalID:(id)a3 seasonCanonicalID:(id)a4;
+ (BOOL)_openITunesPlayableWatchListAppUnavailable:(id)a0 forContentType:(unsigned long long)a1 canonicalID:(id)a2 showCanonicalID:(id)a3 seasonCanonicalID:(id)a4;
+ (BOOL)_openNonITunesPlayableWatchListAppAvailable:(id)a0 forContentType:(unsigned long long)a1 canonicalID:(id)a2 showCanonicalID:(id)a3 seasonCanonicalID:(id)a4;
+ (BOOL)_openNonITunesPlayableWatchListAppUnavailable:(id)a0 forContentType:(unsigned long long)a1 canonicalID:(id)a2 showCanonicalID:(id)a3 seasonCanonicalID:(id)a4;
+ (BOOL)_playNonITunesPlayableUsingAssociatedApp:(id)a0;
+ (id)_punchoutURLForDirectPlayback:(id)a0 ignoreExtras:(BOOL)a1;
+ (id)_watchListAppOpenPunchoutURLWithITunesPlayable:(id)a0 forContentType:(unsigned long long)a1 canonicalID:(id)a2 showCanonicalID:(id)a3 seasonCanonicalID:(id)a4;
+ (id)_watchListAppPunchoutURLWithPlayable:(id)a0 forContentType:(unsigned long long)a1 canonicalID:(id)a2 showCanonicalID:(id)a3 seasonCanonicalID:(id)a4 allowPlayAction:(BOOL)a5 isPlaybackURL:(BOOL *)a6;
+ (BOOL)openPlayable:(id)a0 forContentType:(unsigned long long)a1 canonicalID:(id)a2;
+ (BOOL)openPlayable:(id)a0 forContentType:(unsigned long long)a1 canonicalID:(id)a2 showCanonicalID:(id)a3;
+ (BOOL)openPlayable:(id)a0 forContentType:(unsigned long long)a1 canonicalID:(id)a2 showCanonicalID:(id)a3 seasonCanonicalID:(id)a4;

@end
