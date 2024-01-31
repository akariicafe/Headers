@class NSObject;
@protocol OS_os_log;

@interface PGSettlingEffectWallpaperSuggesterLogger : NSObject {
    NSObject<OS_os_log> *_loggingConnection;
}

- (void).cxx_destruct;
- (id)initWithLoggingConnection:(id)a0;
- (void)logFilteringStatistics:(struct { int x0; int x1; int x2; int x3; int x4; int x5; int x6; struct { int x0; int x1; } x7; struct { int x0; int x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; int x9; int x10; int x11; int x12; } x8; struct { int x0; int x1; int x2; } x9; int x10; int x11; })a0 assetGaterStatistics:(struct { int x0; int x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; })a1;
- (void)logHighlightStatistics:(struct { int x0; int x1; int x2; })a0;
- (void)logPosterFilteringStatistics:(struct { int x0; int x1; })a0;
- (void)logSettlingEffectScoreRequest:(int)a0;
- (void)logStats:(int)a0 reason:(id)a1;

@end
