@class NSMutableDictionary, SignpostSupportAnimationGraceTime;

@interface SignpostSupportGraceTimeOverrideEntry : NSObject

@property (readonly, nonatomic) NSMutableDictionary *overrides;
@property (readonly) unsigned long long entryLevel;
@property (retain, nonatomic) SignpostSupportAnimationGraceTime *defaultGraceTime;

- (id)initWithEntryLevel:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)debugDescriptionWithWhitespacePrefix:(id)a0;

@end
