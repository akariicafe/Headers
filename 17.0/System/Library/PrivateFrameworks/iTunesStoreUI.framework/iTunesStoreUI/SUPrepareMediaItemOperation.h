@class SUMediaPlayerItem;

@interface SUPrepareMediaItemOperation : ISOperation

@property (readonly, copy, nonatomic) SUMediaPlayerItem *mediaPlayerItem;

- (id)init;
- (void)run;
- (void)dealloc;
- (BOOL)_runHEADRequest:(id *)a0;
- (id)initWithMediaPlayerItem:(id)a0;

@end
