@class NSSet, NSMutableDictionary, NSArray;

@interface DYExperimentOverrideEnable : DYExperiment <NSSecureCoding, NSCopying> {
    NSArray *_perFunctionProfilingData;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, retain, nonatomic) NSMutableDictionary *properties;
@property (readonly, retain, nonatomic) NSSet *overrideTypeStrings;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithName:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithName:(id)a0 captureArchivePath:(id)a1 overrides:(id)a2;
- (BOOL)isPresentFrameEnabled;

@end
