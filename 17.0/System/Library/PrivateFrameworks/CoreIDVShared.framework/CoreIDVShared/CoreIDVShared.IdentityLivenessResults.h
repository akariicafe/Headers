@class NSString;

@interface CoreIDVShared.IdentityLivenessResults : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ livenessLabel;
    void /* unknown type, empty encoding */ assessmentsFAC;
    void /* unknown type, empty encoding */ timestampsFAC;
    void /* unknown type, empty encoding */ assessmentTA;
    void /* unknown type, empty encoding */ maxNccLow;
    void /* unknown type, empty encoding */ maxNccHigh;
    void /* unknown type, empty encoding */ ignoredStitches;
    void /* unknown type, empty encoding */ assessmentsPRD;
    void /* unknown type, empty encoding */ assessmentID;
    void /* unknown type, empty encoding */ timestampsID;
    void /* unknown type, empty encoding */ timestampsButtonPressed;
    void /* unknown type, empty encoding */ luxValues;
    void /* unknown type, empty encoding */ metrics;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *debugDescription;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
