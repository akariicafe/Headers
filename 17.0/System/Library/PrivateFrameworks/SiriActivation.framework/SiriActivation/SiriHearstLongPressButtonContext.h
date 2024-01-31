@interface SiriHearstLongPressButtonContext : SiriLongPressButtonContext {
    BOOL _isTemporaryDevice;
}

+ (BOOL)supportsSecureCoding;

- (BOOL)isTemporaryDevice;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithSpeechRequestOptions:(id)a0;
- (id)initWithCoder:(id)a0;

@end
