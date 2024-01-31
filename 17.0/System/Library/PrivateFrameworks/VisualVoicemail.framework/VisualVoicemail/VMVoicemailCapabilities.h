@interface VMVoicemailCapabilities : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic, getter=isTranscriptionEnabled) BOOL transcriptionEnabled;

+ (id)unarchivedObjectFromData:(id)a0 error:(id *)a1;
+ (id)unarchivedObjectClasses;

- (id)initWithCapabilities:(id)a0;
- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)archivedDataWithError:(id *)a0;
- (id)description;
- (id)initWithTranscriptionEnabled:(BOOL)a0;
- (id)debugDescription;
- (BOOL)isEqualToCapabilities:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
