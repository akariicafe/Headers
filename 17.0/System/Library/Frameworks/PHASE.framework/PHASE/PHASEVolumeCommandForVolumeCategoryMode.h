@class NSString, PHASESessionVolume;

@interface PHASEVolumeCommandForVolumeCategoryMode : PHASEVolumeCommand

@property (readonly, nonatomic) NSString *volumeCategory;
@property (readonly, nonatomic) NSString *volumeMode;
@property (readonly, nonatomic) PHASESessionVolume *volume;

- (id)initWithCategory:(id)a0 mode:(id)a1;
- (id)description;
- (void).cxx_destruct;
- (id)initInternalWithCategory:(id)a0 mode:(id)a1;
- (id)initWithCategory:(id)a0 mode:(id)a1 volume:(id)a2;

@end
