@class NSString, NSArray;

@interface AXMMediaAnalysisCaptions : NSObject <NSSecureCoding> {
    NSString *_text;
    double _confidence;
    BOOL _isLowConfidence;
    NSArray *_classificationIdentifiers;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) double confidence;
@property (readonly, nonatomic) BOOL isLowConfidence;
@property (readonly, nonatomic) NSArray *classificationIdentifiers;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithText:(id)a0 confidence:(double)a1 isLowConfidence:(BOOL)a2 classificationIdentifiers:(id)a3;

@end
