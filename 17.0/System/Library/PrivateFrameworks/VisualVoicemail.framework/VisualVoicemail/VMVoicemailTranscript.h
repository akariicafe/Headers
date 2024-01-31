@class NSString, NSArray;

@interface VMVoicemailTranscript : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *transcriptionString;
@property (readonly, copy, nonatomic) NSArray *segments;
@property (readonly, nonatomic) float confidence;
@property (readonly, nonatomic) unsigned long long confidenceRating;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)archivedData;
- (id)description;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithTranscription:(id)a0;

@end
