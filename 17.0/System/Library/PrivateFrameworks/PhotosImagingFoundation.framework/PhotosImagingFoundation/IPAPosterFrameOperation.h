@interface IPAPosterFrameOperation : IPAVideoOperation

@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } frameTime;

- (id)initWithOperation:(id)a0;
- (id)settingsDictionary;
- (id)identifier;
- (id)debugDescription;
- (id)initWithFrameTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)initWithSettingsDictionary:(id)a0;
- (BOOL)isEqualToOperation:(id)a0;
- (BOOL)isMigratable;

@end
