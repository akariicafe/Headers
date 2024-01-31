@class NSArray, SHSignature;

@interface SHMatch : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *mediaItems;
@property (readonly, nonatomic) SHSignature *querySignature;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)containsMediaItemWithFuzzyTolerance:(id)a0;
- (id)initWithMediaItems:(id)a0 forSignature:(id)a1;

@end
