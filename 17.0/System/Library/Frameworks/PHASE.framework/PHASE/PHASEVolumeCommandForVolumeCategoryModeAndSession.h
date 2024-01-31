@interface PHASEVolumeCommandForVolumeCategoryModeAndSession : PHASEVolumeCommandForVolumeCategoryMode

@property (readonly, nonatomic) unsigned int audioSessionToken;

- (id)description;
- (id)initWithCategory:(id)a0 mode:(id)a1 sessionToken:(unsigned int)a2;

@end
