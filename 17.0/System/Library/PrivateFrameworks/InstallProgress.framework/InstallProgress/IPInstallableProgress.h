@class IPInstallableProgressSource, IPInstallableProgressData;

@interface IPInstallableProgress : NSObject <NSCopying> {
    IPInstallableProgressData *_data;
}

@property (readonly) IPInstallableProgressSource *source;
@property (readonly) double overallFractionCompleted;
@property (readonly) unsigned long long phase;
@property (readonly) double phaseFractionCompleted;
@property (readonly) unsigned long long phaseTotalUnitCount;
@property (readonly) unsigned long long phaseCompletedUnitCount;

- (id)description;
- (void).cxx_destruct;
- (unsigned long long)phase;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSource:(id)a0 progressSnapshot:(id)a1;
- (double)overallFractionCompleted;
- (unsigned long long)phaseCompletedUnitCount;
- (double)phaseFractionCompleted;
- (unsigned long long)phaseTotalUnitCount;

@end
