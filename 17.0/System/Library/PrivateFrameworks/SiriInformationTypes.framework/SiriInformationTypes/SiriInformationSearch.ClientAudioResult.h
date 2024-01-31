@class NSString;

@interface SiriInformationSearch.ClientAudioResult : SiriInformationSearch.PommesResult {
    void /* unknown type, empty encoding */ vocabularyResult;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
