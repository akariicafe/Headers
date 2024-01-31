@interface SiriInformationSearch.GenericExperience : SiriInformationSearch.Experience {
    void /* unknown type, empty encoding */ components;
    void /* unknown type, empty encoding */ renderOptions;
    void /* unknown type, empty encoding */ serverSuggestions;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
