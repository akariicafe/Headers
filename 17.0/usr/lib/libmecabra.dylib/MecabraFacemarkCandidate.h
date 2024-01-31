@class NSString;

@interface MecabraFacemarkCandidate : NSObject

@property (readonly, nonatomic) NSString *string;
@property (readonly, nonatomic) NSString *category;

+ (id)candidateWithString:(id)a0 category:(id)a1;
+ (id)copyFacemarkCandidatesForLanguage:(int)a0;
+ (id)copyFacemarkCandidatesForLocale:(id)a0;

- (id)surface;
- (void)dealloc;
- (id)description;
- (id)initWithString:(id)a0 category:(id)a1;

@end
