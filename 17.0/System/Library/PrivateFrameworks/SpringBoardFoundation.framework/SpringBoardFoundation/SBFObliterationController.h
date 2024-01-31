@interface SBFObliterationController : NSObject

+ (id)sharedInstance;

- (void)_doObliterateWithType:(struct __CFString { } *)a0 eraseDataPlan:(BOOL)a1 showingProgress:(BOOL)a2 options:(id)a3;
- (void)markObliterationStart;
- (void)obliterateDataPartitionShowingProgress:(BOOL)a0 skipDataObliteration:(BOOL)a1 eraseDataPlan:(BOOL)a2 reason:(id)a3;
- (void)wipeAndBrickShowingProgress:(BOOL)a0 reason:(id)a1;

@end
