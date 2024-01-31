@class NSArray, NSString;

@interface MNSignInstructionContents : MNListInstructionContents <MNInstructionContents> {
    NSArray *_normalInstructionStrings;
}

@property (retain, nonatomic) NSArray *maneuverFormats;
@property (readonly, nonatomic) long long context;
@property (nonatomic) BOOL suppressNames;
@property (retain, nonatomic) NSString *roadName;
@property (readonly, nonatomic) BOOL hasServerContent;
@property (nonatomic) BOOL suppressFallback;

+ (id)contentsWithStep:(id)a0 destination:(id)a1;

- (id)description;
- (void).cxx_destruct;
- (unsigned long long)_distanceFormatOptions;
- (id)_evaluatedStringsForInstructionStrings:(id)a0;
- (id)_instructionsForFormats:(id)a0;
- (void)_populateFromStep:(id)a0;
- (id)instructionWithShorterAlternatives;

@end
