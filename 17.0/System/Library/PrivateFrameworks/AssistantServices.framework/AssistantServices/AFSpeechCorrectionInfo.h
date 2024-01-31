@class NSString, NSDictionary, NSArray;

@interface AFSpeechCorrectionInfo : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long alternativeSelectionCount;
@property (nonatomic) long long characterModificationCount;
@property (nonatomic) long long characterInsertionCount;
@property (nonatomic) long long characterSubstitutionCount;
@property (nonatomic) long long characterDeletionCount;
@property (copy, nonatomic) NSString *correctedText;
@property (copy, nonatomic) NSDictionary *recognizedTextInfo;
@property (copy, nonatomic) NSDictionary *alternativesSelectedInfo;
@property (copy, nonatomic) NSArray *selectedAlternativesInfo;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
