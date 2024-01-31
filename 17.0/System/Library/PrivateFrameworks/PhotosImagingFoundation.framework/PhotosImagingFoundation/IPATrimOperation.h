@interface IPATrimOperation : IPAVideoOperation

@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } startTime;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } endTime;
@property (readonly, nonatomic) struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } trimRange;

- (id)initWithOperation:(id)a0;
- (id)settingsDictionary;
- (id)identifier;
- (id)debugDescription;
- (id)initWithStartTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 endTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (id)initWithSettingsDictionary:(id)a0;
- (id)initWithTrimRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (BOOL)isEqualToOperation:(id)a0;
- (id)trimRangeDictionary;

@end
